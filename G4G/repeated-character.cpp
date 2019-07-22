#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, count[30];
    cin>>T;

    while(T--){
        string s;
        cin>>s;
        bool x=0;
        int i=0;
        memset(count, 0, sizeof count);
        for(;i<s.length();i++)count[s[i]-97]++;
        for(i=0;i<s.length();i++)if(count[s[i]-97]>1){x=1;break;}
        if(x) cout<<s[i]<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}