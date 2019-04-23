#include <bits/stdc++.h>

using namespace std;

int main(){

	string str;
	while(getline(cin,str)){
		if(str=="DONE")break;

		string rev="",nstr;
		for(int i=0;i<str.size();i++)
			if(isalpha(str[i]))
				rev.push_back(tolower(str[i]));
		nstr = rev;
		reverse(rev.begin(),rev.end());

		if(nstr == rev)
      	printf("You won't be eaten!\n");
    	else
        printf("Uh oh..\n");
	}

	return 0;
}