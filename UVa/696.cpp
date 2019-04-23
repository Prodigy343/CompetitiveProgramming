#include <bits/stdc++.h>

using namespace std;

int main(){

	int N,M;
	while(1){
		scanf("%i%i",&N,&M);
		if(N||M)break;
		int ans;

		if(N==1){
			ans=M;
		}else if(M==1){
			ans=N;
		}else if(N==2){
			int m=M/2*2;
			if(m==M)
				ans=m%2?2*(M+1):M;
			else
				ans=M+1;		
		}else if(M==2){
			int n=N/2;
			if(n*2==N)
				ans=n%2?2*(N+1):N;
			else
				ans=N+1;
		}else{
			ans=(N*M+1)/2;
		}

		printf("%i knights may be placed on a %i row %i column board.\n",ans,N,M);
	}

	return 0;
}