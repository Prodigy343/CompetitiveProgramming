#include <bits/stdc++.h>

using namespace std;

int main(){
	int G;
	while(cin>>G&&G){
		string S;
		cin>>S;
		if(G==1)for(int i=S.size()-1;i>=0;i--)cout<<S[i];
		else if(G==S.size())cout<<S;
		else
			for(int i=1;i<=G;i++)
				for(int j=i*(S.size()/G)-1;i*(S.size()/G)-j<=(S.size()/G);j--)
					cout<<S[j]; 

		cout<<endl;
	}

	return 0;
}