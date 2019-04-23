#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	scanf("%i",&T);
	
	while(T--){
		long long int ac,c=0,N;
		scanf("%lli",&N);

		for(int i=0;i<N;i++){
			scanf("%lli",&ac);
			c+=ac;
			c%=N;			
		}

		//long long int mod = c - floor(c / N) *N;
		//cout<<c<<" "<<N<<" "<<mod<<endl;
		printf("%s\n",(c?"NO":"YES"));
	}

	return 0;
}