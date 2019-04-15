#include <bits/stdc++.h>
using namespace std;

void sieve(int n, vector<int>& primes){
	bool isPrime[n];
	memset(isPrime, 1, sizeof isPrime);
	for(int i=2 ; i<=n ; i++){
		if(!isPrime[i])continue;
		primes.push_back(i);
		for(unsigned long long int j=i; j<=n ;j+=i)isPrime[j] = 0;
	}
}

int main() {
	vector<int> p;
	sieve(65536, p);
	
	int T;
	scanf("%i", &T);
	
	while(T--){
		unsigned long long int a,b;
		scanf("%lld %lld", &a, &b);
		if(a<2)a=2;
		bool primes[b-a+1];
		memset(primes, 1, sizeof primes);
		
		for(int i=0 ; i<p.size() ; i++){
			if(p[i] > b)break;
			
			unsigned long long int j = floor(a/p[i])*p[i];
			if(j < a)j += p[i];
			if(p[i] <= b && p[i] >= a)j += p[i];
			for(; j<=b ; j+=p[i])primes[j-a] = 0;
		}
		
		for(unsigned long long int i=a ; i<=b ; i++){
			if(primes[i-a])
				printf("%i\n", i);
		}
		
		if(T)printf("\n");
	}
	
	return 0;
}