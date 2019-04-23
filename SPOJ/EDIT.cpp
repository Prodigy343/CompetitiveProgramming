#include <bits/stdc++.h>

using namespace std;

int main(){
	string a;
	while(getline(cin,a)){
		bool b1=1,b2=0;
		int c1=0,c2=0;
		for(int i=0;i<a.size();i++){
			
			if(a[i]>96){
				if(b1)
					c1++;
				else
					c2++;
			}else{
				if(b2)
					c1++;
				else
					c2++;
			}

			b1 = (b1?0:1);
			b2 = (b2?0:1);
		}
		printf("%i\n",min(c1,c2));
	}

	return 0;
}