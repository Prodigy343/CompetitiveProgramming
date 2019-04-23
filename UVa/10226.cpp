#include <bits/stdc++.h>

using namespace std;

int main(){
	int T,i=0;
	cin>>T;
	cin.ignore();
	while(T--){
		if(i==0)cin.ignore();
		if(i++)cout<<endl;

		string line;

		int total=0;
		map<string,int> population;
		
		while(getline(cin,line)){
			//cout<<line<<endl;
			if(line.size()>0){
				population[line]++;
				total++;
			}else{
				break;
			}
		}
		for(map<string,int>::iterator it=population.begin();it!=population.end();it++){cout<<it->first;printf(" %.4f\n",double(it->second)/double(total)*100);	}
			//cin.ignore();
		i++;
	}
	return 0;
}