#include <bits/stdc++.h>

using namespace std;
/*
inline void fint(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}
*/

string union_n(vector <string> word){	
	sort(word.begin(),word.end());
	string key;
	key.push_back(word[0][0]);
	key.push_back(word[0][1]);
	key.push_back(word[0][2]);
	key.push_back(word[1][0]);
	key.push_back(word[1][1]);
	key.push_back(word[1][2]);
	key.push_back(word[2][0]);
	key.push_back(word[2][1]);
	key.push_back(word[2][2]);
	key.push_back(word[3][0]);
	key.push_back(word[3][1]);
	key.push_back(word[3][2]);
	key.push_back(word[4][0]);
	key.push_back(word[4][1]);
	key.push_back(word[4][2]);
	return key;
}

/* AC - Solution
int main(){
	int N;
	while(cin>>N&&N){
		map<string,int> ans;
		int MAX=-1,c=0,;
		for(int i=0;i<N;i++){
			vector<string> c(5);
			cin>>c[0]>>c[1]>>c[2]>>c[3]>>c[4];
			string s=union_n(c);
			ans[s]++;
			if(ans[s]>MAX)
				MAX=ans[s];
		}
		cout<<c*MAX<<endl;
	}

	return 0;
}
*/

int main(){
	int N;
	while(cin>>N&&N){
		map<double,int> ans;
		int MAX=-1,c=0;
		for(int i=0;i<N;i++){
			double code=0.000f;
			for(int j=0;j<5;j++){
				int s;
				cin>>s;
				code+=double(s)/10.000f;
				if(j==4)ans[code]++;
			}
			cout<<code<<" "<<ans[code]<<" "<<MAX<<endl;
			

			if(ans[code]>=MAX){
				if(ans[code]>MAX){
					MAX=ans[code];
					c=0;
				}
				if(ans[code]==MAX)c++;
			}
		}
		cout<<c*MAX<<endl;
	}

	return 0;
}