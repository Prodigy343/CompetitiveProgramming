#include <bits/stdc++.h> 

using namespace std; 

typedef long long int ll;

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

bool isPrime(unsigned int n, int k) {
   if (n <= 1 || n == 4)  return false; 
   if (n <= 3) return true; 
  
   while (k>0) { 
       int a = 2 + rand()%(n-4);   
  
       // Fermat's little theorem 
       if (modexp(a, n-1, n) != 1) return 0; 
       k--; 
    }

    return 1; 
} 
  
int main() 
{ 
    int k = 3; 
    printf("%i", isPrime(11, k));
    return 0; 
} 