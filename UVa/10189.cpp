#include <bits/stdc++.h>

using namespace std;

int main(){

	int N,M,C=0;
	while(1){
		cin>>N>>M;
		if(!N)break;
		if(C)cout<<endl;
		int nums[N][M];
		memset(nums,0,sizeof(nums));

		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				char a;
				cin>>a;
				if(a=='*'){
					nums[i][j]=-1;
					if(i-1>=0&&nums[i-1][j]!=-1)nums[i-1][j]++;
					if(j-1>=0&&nums[i][j-1]!=-1)nums[i][j-1]++;
					if(j+1<M&&nums[i][j+1]!=-1)nums[i][j+1]++;
					if(i+1<N&&nums[i+1][j]!=-1)nums[i+1][j]++;
					if(i-1>=0&&j-1>=0&&nums[i-1][j-1]!=-1)nums[i-1][j-1]++;
					if(i-1>=0&&j+1<M&&nums[i-1][j+1]!=-1)nums[i-1][j+1]++;
					if(i+1<N&&j-1>=0&&nums[i+1][j-1]!=-1)nums[i+1][j-1]++;
					if(i+1<N&&j+1<M&&nums[i+1][j+1]!=-1)nums[i+1][j+1]++;
				}
			}
		}

		printf("Field #%i:\n",++C);

		for(int i=0;i<N;i++){for(int j=0;j<M;j++)nums[i][j]>=0?cout<<nums[i][j]:cout<<"*";cout<<endl;}
	}

	return 0;
}