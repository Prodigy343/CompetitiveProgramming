#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;

	while(cin>>T&&!cin.eof()){
		int c=0,a;
		for(int i=0;i<5;i++){cin>>a;if(a==T)c++;}
		cout<<c<<endl;
	}

	return 0;
}