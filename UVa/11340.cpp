#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int L,values[130];
		long long int c=0;
		memset(values,0,sizeof(values));
		cin>>L;
		while(L--){
			char a;int val;
			cin>>a>>val;
			values[a]=val;
		}
		cin>>L;
		cin.ignore();
		while(L--){
			string line;
			getline(cin,line);
			for(int i=0;i<line.size();i++)if(line[i]<=127&&line[i]>=32)c+=values[line[i]];
		}
		printf("%0.2f$\n", c/100.0);
	}
	return 0;
}

