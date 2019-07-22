#include <bits/stdc++.h>

using namespace std;

int main(){

    long int a = -1,b = -1,c,n;
    scanf("%ld", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%ld", &c);
        if(i==0){a = c;b = c;}
        a = min(a,c);
        b = max(b,c);
        printf("%ld\n", a+b);
    }
    return 0;
}