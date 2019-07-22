#include <bits/stdc++.h>

using namespace std;

int main(){
    int T,n;
    string s,lower,mayus;
    cin>>T;

    while(T--){
        cin>>n;
        cin>>s;
        lower="";
        mayus="";
        for(int i=0 ; i<n; i++)s[i]>95?lower.push_back(s[i]):mayus.push_back(s[i]);
        sort(lower.begin(), lower.end());
        sort(mayus.begin(), mayus.end());
        for(int i=0,j=0,k=0 ; i<n; i++){
            if(s[i]>95){
                cout<<lower[j];
                j++;
            }else{
                cout<<mayus[k];
                k++;
            }
        }
        cout<<"\n";
    }
    return 0;
}