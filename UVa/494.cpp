#include <bits/stdc++.h>

using namespace std;

int is_word(string s){
	int words=0;
	bool f=0;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])&&!f){
			f=1;
			words++;
		}
		if(!isalpha(s[i]))f=0;
	}

	return words;
}

int main(){
	string s;
	while(getline(cin,s)){
		stringstream ss(s);
		int c=0;
		while(ss>>s)c+=is_word(s);
		cout<<c<<endl;
	}
	return 0;
}

