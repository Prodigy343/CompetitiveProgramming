#include <bits/stdc++.h>
using namespace std;

int modexp(int x,int n,int p)
{
       int y=1,u=x%p;
       while(n)
       {
              if(n&1){
                     y=(y*u)%p;
              }
              n>>=1;
              u=(u*u)%p;
       }
}

int main(){
    int T,a;
    long long int b;

    scanf("%i",&T);

    while(T--){
        scanf("%i %lli", &a,&b);
        printf("%i\n", modexp(a,b,10));
    }

    return 0;
}