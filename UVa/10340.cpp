#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;


int main(){
	string A,B;
	while(cin>>A&&!cin.eof()){
		cin>>B;
		vi pos;
		for(int j=0;j<B.size();j++)if(A[0]==B[j])pos.push_back(j);

		bool flag=0;
		for(int j=0;j<pos.size();j++){
			int k=0;
			for(int i=pos[j];i<B.size();i++){
				if(A.size()-k>B.size()-i)break;
				if(A[k]==B[i])k++;
				if(k==A.size())break;
			}
			if(k==A.size()){flag=1;break;}
		}

		printf("%s\n",flag?"Yes":"No");
	}
	return 0;
}