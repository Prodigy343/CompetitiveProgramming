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
		for(int i=0;i<w.size();i++)if(isalpha(w[i]))count[tolower(w[i])-97]++;
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

void gen_anagram(vector<pair<char,int> > letters){
	bool wt=0;
	char l;
	for(int i=0;i<letters.size();i++){
		if(letters[i].second%2){
			letters[i].second--;
			wt=1;
			l=letters[i].first;
		}
		for(int j=0;j<(letters[i].second/2);j++)
			cout<<letters[i].first;
	}
	if(wt)cout<<l;
	for(int i=letters.size()-1;i>=0;i--){
		for(int j=0;j<(letters[i].second/2);j++)
			cout<<letters[i].first;
	}
	cout<<endl;
}

int main(){
	int T;
	cin>>T;
	cin.ignore();

	while(T--){
		string A,B;
		
		getline(cin,A);
		getline(cin,B);
		
		word w1(A);
		word w2(B);

		w1.counting();
		w2.counting();

		vector <pair<char,int> > c1,c2;
		int I=0;
		bool flag = 1;

		for(int i=0;i<27;i++){
			if(w1.count[i]>w2.count[i]){
				int x = w1.count[i]-w2.count[i];
				if(x%2)I++;
				c1.push_back(make_pair(char(i+97),x));
			}

			if(w2.count[i]>w1.count[i]){
				int x = w2.count[i]-w1.count[i];
				if(x%2)I++;
				c2.push_back(make_pair(char(i+97),w2.count[i]-w1.count[i]));
			}

			if((c1.size()>0&&c2.size()>0)||I>1){
				flag = 0; 
				break;
			}
		}

		
		if(flag == 0){
			cout<<"NO LUCK"<<endl;
		}
		else if (flag==1 && c1.size()==0 && c2.size()== 0){
			cout<<"YES"<<endl;
		}
		else{
			if(flag){
				if(c1.size()!=0)gen_anagram(c1);
				else gen_anagram(c2);
			}
		}

	}

	return 0;
}