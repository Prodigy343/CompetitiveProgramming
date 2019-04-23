#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,R;

	while(cin>>N>>R&&!cin.eof()){
		int s=0;
		for(int i=0;i<R;i++){
			int B,D,others=0;
			cin>>B>>D;
			for(int j=0;j<N-1;j++){int x;cin>>x;others+=x;}
			if(others<B){
				int m;
				if((B-others)>=10000)
					m=10000;
				else if((B-others)>=1000)
					m=1000;
				else if((B-others)>=100)
					m=100;
				else if((B-others)>=10)
					m=10;
				else
					m=1;
				s+=(D>m)?m:m-D;
			}
		}
		cout<<s<<endl;
	}

	return 0;
}