#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool EOOF=0;

inline int fastRead_string(string &s){
    register char c = 0;

    while (c < 33)c = getchar_unlocked();

    while (c != '\0'&&c!= 91&&c!=93&&c!= EOF) {
        s.push_back(c);
        c = getchar_unlocked();
    }
    if(c==91)return 1;
    if(c==93)return 2;
    if(c=='\0')return 0;
    if(c==EOF)EOOF=1;
}


int main(){

	while(1){
		deque<string> words;
		while(1){
			string s;
			int type = fastRead_string(s);
			if(type==1){
				if(s.size()>0)words.push_back(s);
				words.push_back("[");
			}else if(type==2){
				if(s.size()>0)words.push_back(s);
				words.push_back("]");
			}
			else{
				if(s.size()>0)words.push_back(s);
				break;
			}		
		}



		if(EOOF)break;
	}

	return 0;
}