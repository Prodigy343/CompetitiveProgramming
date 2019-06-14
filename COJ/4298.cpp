#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);//boost cin
    cin.tie(NULL);

    int T,N,H,x;

    cin>>T;

    while(T--){
        cin>>N>>H;
        bool d[N];
        memset(d, 1, N * sizeof (bool));
        for(int i=0 ; i<H ; i++){
            cin>>x;
            d[x-1] = 0;
        }
        for(int i=0 ; i<N ; i++ )if(d[i])cout<<i+1<<" ";
        cout<<endl;
    }

    return 0;
}