#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;

	while(T--){
		char op;
		long long int ans = 0,carry;
		bool _ = 1,__ = 1;
		while(1){
			if(_){
				cin>>carry;
				if(__){
					ans = carry;
					__=0;
				}else{
					if(op== '+')
						ans += carry;
					else if(op== '-')
						ans = ans - carry;
					else if(op== '*')
						ans *= carry;
					else
						ans = ans / carry;
				}
				_=0;
			}else{
				cin>>op;
				if(op=='=')break;
				_=1;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}