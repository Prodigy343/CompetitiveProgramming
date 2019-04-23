#include <bits/stdc++.h>

using namespace std;

struct word{
	string w;
	int count[27],wspace;

	/*word(){
		wspace = 0;
		memset(count,0,sizeof(count));
	}*/

	word(string S){
		w = S;
		wspace = 0;
		memset(count,0,sizeof(count));
	}

	void counting(){
		for(int i=0;i<w.size();i++)count[tolower(w[i])-97]++;
	}

	void print(){
		for (int i = 0; i < 60; ++i)
				cout<<char(i+65)<<" => "<<count[i]<<endl;
	}

	bool cmp(word X){
		for(int i=0;i<27;i++)if(count[i]!=X.count[i])return 0;
		return 1;	
	}
};

int main(){
	string line;
	vector<word> dict;
	while(cin>>line&&line!="#"){
		dict.push_back(word(line));
		dict[dict.size()-1].counting();
	}

	vector<string> solve;
	for(int i=0;i<dict.size();i++){
		int c=0;
		for(int j=0;j<dict.size();j++){
			if(i==j)continue;
			if(dict[i].cmp(dict[j])){
				c++;
				break;
			}
		}
		if(c==0)solve.push_back(dict[i].w);
	}
	sort(solve.begin(),solve.end());

	for(int i=0;i<solve.size();i++)cout<<solve[i]<<endl;

	return 0;
}