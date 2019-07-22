#include <bits/stdc++.h>

using namespace std;

long long int f(long long int x, long long int y){
    long long int s = x/2;
    if(x%2){
        s++;
        return (x*s)-(y-1);
    }
    return (x*s)-(s-1)+(y-1);
}

int main(){
    long long int x=1,y=1;
    while(scanf("%lld %lld", &x, &y)){
        if(!x&&!y)break;
        y = x + y - 1;
        printf("%lld\n", f(y,x));
    }
    return 0;
}