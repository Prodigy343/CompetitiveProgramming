#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	scanf("%i",&T);

	while(T--){
		long long int k;
		scanf("%lld",&k);
		printf("%lld\n",192+(k-1)*250);
	}

	return 0;
}