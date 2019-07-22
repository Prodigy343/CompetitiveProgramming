#include <bits/stdc++.h>

using namespace std;

class word{
    public:
    int l[28];
    string w;
    word(){
        memset(l, 0, sizeof l);
        w="";
    }
    word(string x){
        this->w = x;
        memset(l, 0, sizeof l);
        for(int i=0;i<x.length();i++)l[x[i]-97]++;
    }
    bool compare(word x){
        for(int i=0 ; i<28 ; i++)if(x.l[i] != l[i])return 0;
        return 1;
    }
    bool anapalin(){
        bool odd = 0;
        for(int i=0 ; i<28 ; i++){
            if(this->l[i]%2){
                if(odd)return 0; else odd = 1;
            }
        }
        return 1;
    }
    void capitalize(){
        if(this->w[0]!= ' ')this->w[0] -= 32;
        for(int i=1;i<this->w.length();i++){
            if(this->w[i-1] == ' ' && this->w[i]>96 && this->w[i]<123)this->w[i] -= 32;
        }
    }
};

void mergeStrings(string a,string b){
        int i=0,j=0,k=0;
        while(i<a.length() || j<b.length()){
            cout<<i<<" "<<j<<endl;
            if(k%2 == 0){
                if(i<a.length()){
                    cout<<a[i];
                    i++;
                }else{
                    cout<<b[j];
                    j++;
                }
            }else{
                if(j<b.length()){
                    cout<<b[j];
                    j++;
                }else{
                    cout<<a[i];
                    i++;
                }
            }
            k++;
        }
        cout<<"\n";
    }

int main(){
    int T;
    cin>>T;
    while(T--){
        string a,b;
        cin>>a>>b;
        mergeStrings(a,b);
    }
    return 0;
}