#include <bits/stdc++.h> 
using namespace std; 
  
typedef unsigned int ll;

//O(log y)
ll power(ll x, ll y, ll p) { 
    ll pw = 1;
    x = x%p;
    while (y > 0) {
        if (y & 1) pw = (pw*x)%p; 
        y = y>>1;
        x = (x*x)%p;
    } 
    return pw; 
}
  
// This function is called for all k trials. It returns 
// false if n is composite and returns false if n is 
// probably prime. 
// d is an odd number such that  d*2<sup>r</sup> = n-1 
// for some r >= 1 
bool miillerTest(ll d, ll n) 
{ 
    // Pick a random number in [2..n-2] 
    // Corner cases make sure that n > 4 
    ll a = 2 + rand() % (n - 4); 
  
    // Compute a^d % n 
    ll x = power(a, d, n); 
  
    if (x == 1  || x == n-1) 
       return true; 
  
    // Keep squaring x while one of the following doesn't 
    // happen 
    // (i)   d does not reach n-1 
    // (ii)  (x^2) % n is not 1 
    // (iii) (x^2) % n is not n-1 
    while (d != n-1) 
    { 
        x = (x * x) % n; 
        d *= 2; 
  
        if (x == 1)      return false; 
        if (x == n-1)    return true; 
    } 
  
    // Return composite 
    return false; 
} 
  
// It returns false if n is composite and returns true if n 
// is probably prime.  k is an input parameter that determines 
// accuracy level. Higher value of k indicates more accuracy. 
bool isPrime(ll n, int k) 
{ 
    // Corner cases
    if (n%2==0) return 0;
    if (n == 1) return false; 
    if (n <= 3) return true; 
  
    // Find r such that n = 2^d * r + 1 for some r >= 1 
    ll d = n - 1; 
    while (d % 2 == 0) 
        d /= 2; 
  
    // Iterate given nber of 'k' times 
    for (int i = 0; i < k; i++) 
         if (!miillerTest(d, n)) 
              return false; 
  
    return true; 
} 
  
// Driver program 
int main() {
     
    ios_base::sync_with_stdio(false); cin.tie(0);
    int T,k = 2;
    ll n;
  
    scanf("%i", &T);

    while(T--){
        scanf("%u", &n);
        if( n < 5 ) {
            printf("2\n");
            continue;
        }
        if( n > 4294967291LL ) {
            printf("4294967291\n");
            continue;
        }
        while(1){
            n--;
            if(isPrime(n, k)){
                printf("%u\n",n);
                break;
            }
        }
    }
  
    return 0; 
}