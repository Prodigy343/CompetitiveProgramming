#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	scanf("%i",&T);
	
	while(T--){
		int n,c=0;
		scanf("%i",&n);
		
		int w[n],m[n];

		for(int i=0;i<n;i++)scanf("%i",&w[i]);
		for(int i=0;i<n;i++)scanf("%i",&m[i]);

		sort(w,w+n);
		sort(m,m+n);

		for(int i=0;i<n;i++)
			c+=(m[i]*w[i]);

		printf("%i\n",c);
	}

	return 0;
}