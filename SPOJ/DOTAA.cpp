#include <bits/stdc++.h>

using namespace std;

int main(){

	int T;
	cin>>T;

	while(T--){
		int N,M,D;
		cin>>N>>M>>D;
		vector <int> hp(N);
		for(int i=0;i<N;i++)cin>>hp[i];
		sort(hp.begin(),hp.end());

		for(int i=hp.size()-1;i>=0;i--){
			int d = hp[i] / D , m = hp[i] % D;
			if(d>0){
				d = (m>0?d:d-1);
				M -= d;
			}	
			if(M<=0)break;
		}

		printf("%s\n",(M<=0?"YES":"NO"));
	}

	return 0;
}