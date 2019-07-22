#include <bits/stdc++.h>

using namespace std;

int digit(char x){
    if(x>=48&&x<=57)return x-48;
    return -1;
}

int main(){
    int T;
    cin>>T;

    while(T--){
        string s;
        cin>>s;
        int best=0,d,mult=1,acum=0;
        for(int i=s.length()-1 ; i>=0 ; i--){
            d=digit(s[i]);
            if(d==-1){
                acum=0;
                mult=1;
            }else{
                acum+=d*mult;
                mult*=10;
                if(acum>best)best=acum;
            }
        }
        cout<<best<<"\n";

    }
    return 0;
}