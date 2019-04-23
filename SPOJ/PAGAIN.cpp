#include <bits/stdc++.h>
using namespace std;

void sieve(int n, vector<int>& primes){
	bool isPrime[n];
	memset(isPrime, 1, sizeof isPrime);
	for(int i=2 ; i<=n ; i++){
		if(!isPrime[i])continue;
		primes.push_back(i);
		for(unsigned long long int j=i*i; j<=n ;j+=i)isPrime[j] = 0;
	}
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
	vector<int> p;
	sieve(65536, p);
	
	int T;
	scanf("%i", &T);
	
	while(T--){
		unsigned long long a,b;
		scanf("%llu", &b);
		if( b < 5 ) {
			printf("2\n");
			continue;
		}
		if( b > 4294967291LL ) {
			printf("4294967291\n");
			continue;
		}
		if(b>42)a=b-40;else a=2;
		bool primes[b-a+1];
		memset(primes, 1, sizeof primes);
		
		for(int i=0 ; i<p.size() ; i++){
			if(p[i] > b)break;
			
			unsigned long long j = floor(a/p[i])*p[i];
			if(j < a)j += p[i];
			if(p[i] <= b && p[i] >= a)j += p[i];
			for(; j<=b ; j+=p[i])primes[j-a] = 0;
		}
		
		for(unsigned long long i=b-1 ; i>=0 ; i--){
			if(primes[i-a]){
				printf("%llu ", i);
				break;
			}
		}
		
		printf("\n");
	}
	
	return 0;
}