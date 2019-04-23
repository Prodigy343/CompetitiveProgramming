#include <bits/stdc++.h>

using namespace std;

int getnum(string n){
	if(n == "063")
		return 0;
	else if(n == "010")
		return 1;
	else if(n == "093")
		return 2;
	else if(n == "079")
		return 3;
	else if(n == "106")
		return 4;
	else if(n == "103")
		return 5;
	else if(n == "119")
		return 6;
	else if(n == "011")
		return 7;
	else if(n == "127")
		return 8;
	else if(n == "107")
		return 9;
}

string getcode(int n){
	if(n == 0)
		return "063";
	else if(n == 1)
		return "010";
	else if(n == 2)
		return "093";
	else if(n == 3)
		return "079";
	else if(n == 4)
		return "106";
	else if(n == 5)
		return "103";
	else if(n == 6)
		return "119";
	else if(n == 7)
		return "011";
	else if(n == 8)
		return "127";
	else if(n == 9)
		return "107";
}

string getsum(string code,int n,int m){
	int p = n/3, s1 = 0;
	for(int i=0;i<n;i+=3){
		int x = getnum(code.substr(i,3));
		s1 += x*pow(10,--p);
	}

	p = m/3;int s2 = 0;
	for(int i=n+1;i<code.size()-1;i+=3){
		int x = getnum(code.substr(i,3));
		s2 += x*pow(10,--p);	
	}

	stringstream c;
	c<<(s1+s2);

	string s = c.str(), ans = "";

	for(int i=0;i<s.size();i++)ans += getcode(s[i]-48);

	return ans;
}

int main(){
	string line = " ";
	
	while(getline(cin,line)&&line!="BYE"){
		int s = line.find('+');
		cout<<line<<getsum(line,s,line.size()-s-2)<<endl;
	}

	return 0;
}