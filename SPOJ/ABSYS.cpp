#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;

	while(T--){
		string num1,num2,an;
		char a;
		cin.ignore();
		cin>>num1>>a>>num2>>a>>an;

		int n1,n2,ans;
		size_t m1 = num1.find('m');
		size_t m2 = num2.find('m');
		size_t m3 = an.find('m');

  		if (m1!=std::string::npos){
			int a = atoi(num2.c_str()),b = atoi(an.c_str());
  			cout<<b-a<<" + "<<a<<" = "<<b<<endl;
  		}

 		if (m2!=std::string::npos){
  			int a = atoi(num1.c_str()),b = atoi(an.c_str());
  			cout<<a<<" + "<<b-a<<" = "<<b<<endl;
  		}

		if (m3!=std::string::npos){
			int a = atoi(num1.c_str()),b = atoi(num2.c_str());
			cout<<a<<" + "<<b<<" = "<<a+b<<endl;
  		}

	}

	return 0;
}