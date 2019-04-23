#include <bits/stdc++.h>

using namespace std;

int main(){

	int T,O=0;
	cin>>T;
	cin.ignore();
	while(T--){
		if(O)cout<<endl;
		int N;
		cin>>N;
		vector <pair<string,int> > words(N);

		string w;
		int id=-1;

		for(int i=0;i<N;i++){
			cin>>w;
			words[i]=make_pair(w,id);
		}

		id=1;
		for(int i=0;i<N;i++){
			w=words[i].first;
			if(words[i].second!=-1)continue;
			words[i].second=id;

			int letters[27];
			memset(letters,0,sizeof(letters));
			for(int j=0;j<w.size();j++)letters[w[j]-97]++;

			for(int j=i+1;j<N;j++){
				int wletters[27];
				
				bool eq=1;
				memset(wletters,0,sizeof(wletters));
				
				for(int k=0;k<words[j].first.size();k++)wletters[words[j].first[k]-97]++;

				for(int k=0;k<26;k++)if(wletters[k]!=letters[k]){eq=0;break;}

				if(eq)words[j].second=id;
			}
			id++;
		}


		//queries
		w="_";
		while(1){
			cin>>w;
			if(w=="END")break;
			int letters[27];
			memset(letters,0,sizeof(letters));
			for(int j=0;j<w.size();j++)letters[w[j]-97]++;

			int get_id=-1,i=0;
			for(int j=0;j<N;j++){
				int wletters[27];
				
				bool eq=1;
				memset(wletters,0,sizeof(wletters));
				
				for(int k=0;k<words[j].first.size();k++)wletters[words[j].first[k]-97]++;

				for(int k=0;k<26;k++)if(wletters[k]!=letters[k]){eq=0;break;}

				if(eq){get_id=words[j].second;break;}
			}

			cout<<"Anagrams for: "<<w<<endl;
			
			if(get_id==-1){cout<<"No anagrams for: "<<w<<endl;continue;}
			for(int j=0;j<N;j++)if(words[j].second==get_id)cout<<"  "<<++i<<") "<<words[j].first<<endl;
		}
		cin.ignore();
		O++;
	}

	return 0;
}