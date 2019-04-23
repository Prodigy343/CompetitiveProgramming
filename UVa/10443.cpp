#include <bits/stdc++.h>

using namespace std;

int main(){

	int T;
	cin>>T;
	while(T--){
		int N,M,D;
		cin>>N>>M>>D;
		char buff[N][M],buff2[N][M];
		for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>buff[i][j];

			int iii=0;
		while(D--){
			
			memset(buff2,'-',sizeof(char)*N*M);
			for(int i=0;i<N;i++){
				for(int j=0;j<M;j++){
					//if(buff2[i][j]=='-')buff2[i][j]=buff[i][j];
					if(buff[i][j]=='R'){
						if(i-1>=0&&buff[i-1][j]=='S')buff2[i-1][j]='R';
						if(j-1>=0&&buff[i][j-1]=='S')buff2[i][j-1]='R';
						if(i+1<N&&buff[i+1][j]=='S')buff2[i+1][j]='R';
						if(j+1<M&&buff[i][j+1]=='S')buff2[i][j+1]='R';

					}else if(buff[i][j]=='P'){
						if(i-1>=0&&buff[i-1][j]=='R')buff2[i-1][j]='P';
						if(j-1>=0&&buff[i][j-1]=='R')buff2[i][j-1]='P';
						if(i+1<N&&buff[i+1][j]=='R')buff2[i+1][j]='P';
						if(j+1<M&&buff[i][j+1]=='R')buff2[i][j+1]='P';

					}else{//S
						if(i-1>=0&&buff[i-1][j]=='P')buff2[i-1][j]='S';
						if(j-1>=0&&buff[i][j-1]=='P')buff2[i][j-1]='S';
						if(i+1<N&&buff[i+1][j]=='P')buff2[i+1][j]='S';
						if(j+1<M&&buff[i][j+1]=='P')buff2[i][j+1]='S';
					}
				}
			}

			for(int i=0;i<N;i++)for(int j=0;j<M;j++)if(buff2[i][j]!='-')buff[i][j]=buff2[i][j];

			//for(int i=0;i<N;i++){cout <<"DAY "<<(++iii)<<endl;for(int j=0;j<M;j++)cout<<buff[i][j];cout<<endl;}cout<<endl;
		}

		for(int i=0;i<N;i++){for(int j=0;j<M;j++)cout<<buff[i][j];cout<<endl;}	
		if(T)cout<<endl;
	}

	return 0;
}