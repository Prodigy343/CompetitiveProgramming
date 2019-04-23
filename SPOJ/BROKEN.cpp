#include <bits/stdc++.h>

using namespace std;

int main(){
	
	while(1){
		int M,max=0,i=0,j=0,c=1;
		int v[300];
		memset(v,0,300*sizeof(int));
		cin>>M;
		if(M==0)break;
		string s;
		
		cin.ignore();
		getline(cin,s);
		//cout<<s<<endl;

		v[s[0]]++;
		while(j<s.size()){
			if(c>M){
				v[s[i]]--;
				if(!v[s[i]])c--;
				i++;
			}else{
				j++;
				//cout<<s[j]<<endl;
				//cout<<v[s[j]]<<endl;
				if(!v[s[j]])c++;
				v[s[j]]++;
				if(j-i>max)max=j-i;
				//cout<<"MAX: "<<max<<" === "<<j<<" === "<<i<<" === "<<c<<endl;
				//j++;
			}
		}
		cout<<max<<endl;
	}

	return 0;
}
using namespace std;

int main() {
	
	// your code here

	return 0;
}