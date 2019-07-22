#include <bits/stdc++.h>

using namespace std;

bool vowl(char x){
    if(x == 97 ||x == 101||x == 105||x == 111||x == 117)return 1;
    return 0;
}

bool vowl_or_mark(char x){
    if(x == 63 || vowl(x))return 1;
    return 0;
}

bool cons_or_mark(char x){
    if(x==63 || (x>97 && x<122 && !vowl(x)))return 1;
    return 0;
}

int main(){
    int T;
    cin>>T;

    while(T--){
        string s;
        cin>>s;
        int c=1,v=1;
        bool b=0;
        for(int i=1; i<s.length() ;i++){
            vowl_or_mark(s[i]) && vowl_or_mark(s[i-1])?v++:v=1;
            cons_or_mark(s[i]) && cons_or_mark(s[i-1])?c++:c=1;
            //cout<<s[i]<<":"<<v<<" "<<c<<endl;
            if(c>3||v>5){
                b=1;
                break;
            }
        }
        if(b) cout<<"0\n";
        else cout<<"1\n";
    }
    return 0;
}