#include <bits/stdc++.h>

using namespace std;


int main(){
	int T;
	scanf("%i",&T);
	while(T--){
		long long int s,da;
		scanf("%lli%lli",&s,&da);
		if(da>s)
			printf("impossible\n");
		else{
			long long int a=(da+s)/2,b=s-a;
			if(a+b!=s||abs(a-b)!=da)printf("impossible\n");else
			printf("%lli %lli\n",a,b);
		}

	}
	return 0;
}