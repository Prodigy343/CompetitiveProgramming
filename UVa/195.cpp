#include <bits/stdc++.h>

using namespace std;

bool comparator(char a, char b){
	return tolower(a) == tolower(b)?a<b:tolower(a)<tolower(b);
}

int main(){
	int T;
	scanf("%i",&T);

	while(T--){
		string w;
		cin>>w;
		sort(w.begin(),w.end(),comparator);
		do
			cout<<w<<endl;
		while(next_permutation(w.begin(),w.end(),comparator));
	}
	return 0;
}