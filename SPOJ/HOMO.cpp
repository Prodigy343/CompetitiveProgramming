#include <bits/stdc++.h>

using namespace std;

int main(){
	int op,homos=0,n=0;
	cin>>op;
	map<long long int,int> List;
	while(op--){
		string s;
		long long int n;
		cin>>s>>n;
		
		if(s[0] == 'i'){
			int a = ++List[n];
			//cout<<n<<" ==> "<<a<<endl;
			if(a == 2)homos++;
		}else{
			int a = --List[n];
			if(a == 1)homos--;
			if(a <= 0)List.erase(n);
		}

		//cout<<homos<<" "<<List.size()<<endl;

		if(homos>0&&List.size()>1)
			printf("both\n");
		else if(homos==0&&List.size()>1)
			printf("hetero\n");
		else if(homos>0&&List.size()>=1)
			printf("homo\n");
		else
			printf("neither\n");

	}
}