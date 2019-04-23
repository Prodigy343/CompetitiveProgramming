#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,I=0;

	while(cin>>n&&n){
		int bricks[n],mh=0,c1=0,c2=0;
		for(int i=0;i<n;i++){cin>>bricks[i];mh+=bricks[i];}
		//sort(bricks,bricks+n);
		mh= mh/n;
		for(int i=0;i<n;i++) bricks[i]<mh?c1+=(mh-bricks[i]):c2+=(bricks[i]-mh);
		printf("Set #%i\nThe minimum number of moves is %i.",++I,min(c1,c2));
	}

	return 0;
}