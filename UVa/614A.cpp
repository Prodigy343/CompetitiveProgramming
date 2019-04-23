#include <bits/stdc++.h>

using namespace std;

int main(){

    bool flag = 0;
    long long int l,r,k,p;
    scanf("%I64d%I64d%I64d",&l,&r,&k);
    p=1;
    
    while(p<=r){

        if(p>=l&&p<=r){
            printf("%I64d ",p);
            flag = 1;
        }   

        p*=k;
    }

    if(!flag)printf("-1");
    
    printf("\n");

    return 0;
}