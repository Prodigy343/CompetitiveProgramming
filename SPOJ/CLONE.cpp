#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m && n && m){
		map <string,int> db;
		vector <int> ans (n,0);
		string line;
		for(int i=0;i<n;i++){
			cin>>line;
			int a = ++db[line];
			ans[a-1]++;
			if(a>1)ans[a-2]--;
		}
		for(int i=0;i<n;i++)
			cout<<ans[i]<<endl;
	}

}