#include <bits/stdc++.h>

using namespace std;

struct word{
	string w;
	int count[94],wspace;
	word(){
		wspace = 0;
		memset(count,0,sizeof(count));
	}

	void counting(){
		for(int i=0;i<w.size();i++)if(w[i]!=32){count[w[i]-33]++;wspace++;}
	}

	void print(){
		for (int i = 0; i < 94; ++i)
				cout<<char(i+33)<<" => "<<count[i]<<endl;
	}
};

bool cmp(int w1[94],int w2[94]){
	for(int i=0;i<94;i++)
		if(w1[i]!=w2[i])return 0;
	return 1;
}

int main(){
	int T;
	scanf("%i\n",&T);

	while(T--){
		vector <string> m;
		string s;
		int n=0;

		while(getline(cin,s)&&s.size()){
			m.push_back(s);
			n++;
		}
		sort(m.begin(),m.end());

		vector<word> dict(n);
		for(int i=0;i<n;i++){
			dict[i].w=m[i];
			dict[i].counting();
		}

		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(dict[i].wspace==dict[j].wspace&cmp(dict[i].count,dict[j].count))
					cout<<dict[i].w<<" = "<<dict[j].w<<endl;

		if(T)cout<<endl;
	}

	return 0;
}