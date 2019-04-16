#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

//O(log y)
ll modexp(ll x, ll y, ll p) { 
    ll pw = 1;
    x = x%p;
    while (y > 0) {
        if (y & 1) pw = (pw*x)%p; 
        y = y>>1;
        x = (x*x)%p;
    } 
    return pw; 
}

int main(){
    printf("%i", modexp(2323443,378063434,1000));
    return 0;
}