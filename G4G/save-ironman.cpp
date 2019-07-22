#include <bits/stdc++.h>

using namespace std;

bool check(char x){
    if( (x>=48 && x<=57) || (x>=64 && x<=90) || (x>=97 && x<=122) )return 0; 
    return 1;
}

int check_c(char x, char y){
    bool f1 = check(x),f2 = check(y);

    if(f1&&f2)return 0;
    if(f1)return 1;
    if(f2)return 2;
    return -1;
}

bool comp(char x, char y){
    if(x==y)return 1;
    if(x+32==y)return 1;
    if(x==y+32)return 1;
    return 0;
}

int main(){
    int T;
    cin>>T;
    cin.ignore();

    while(T--){
        string palin;
        getline(cin,palin);
        int i=0,j=palin.length()-1,c=0;
        bool x=1;
        while(i<j){

            c=check_c(palin[i], palin[j]);
            cout<<"test\n"<<int(palin[i])<<" "<<int(palin[j])<<"\n check_c value"<<c<<"\n";

            if(c == 0){
                i++;
                j--;
                continue;
            }else if(c == 1){
                i++;
                continue;
            }else if(c == 2){
                j--;
                continue;
            }

            if(comp(palin[i],palin[j])){
                i++;
                j--;
            }else{
                x=0;
                break;
            }
        }
        if(x)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}