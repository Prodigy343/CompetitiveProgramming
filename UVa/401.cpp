#include <bits/stdc++.h>

using namespace std;

int main(){
	string S;
	
	int mirror_map[123];
	memset(mirror_map,0,123*sizeof(int));
	
	mirror_map['A']='A';
	mirror_map['E']='3';
	mirror_map['H']='H';
	mirror_map['I']='I';
	mirror_map['J']='L';
	mirror_map['L']='J';
	mirror_map['M']='M';
	mirror_map['O']='O';
	mirror_map['S']='2';
	mirror_map['T']='T';
	mirror_map['U']='U';
	mirror_map['V']='V';
	mirror_map['W']='W';
	mirror_map['X']='X';
	mirror_map['Y']='Y';
	mirror_map['Z']='5';

	mirror_map['1']='1';
	mirror_map['2']='S';
	mirror_map['3']='E';
	mirror_map['5']='Z';
	mirror_map['8']='8';


	while(cin>>S){
		int op=1,ml=0,sl=0;
		for(int j=S.size()-1,i=0;i<=j;j--,i++){

			if(i==j){
				if(mirror_map[S[i]]==S[i])
					sl++;
				continue;
			}

			if(S[i]==S[j]){
				//cout<<"iguales : "<<mirror_map[S[i]]<<" "<<S[j]<<endl;
				if(mirror_map[S[i]]==S[i])sl++;
			}else{
				//cout<<"distintos : "<<mirror_map[S[i]]<<" "<<mirror_map[S[j]]<<endl;
				if(mirror_map[S[i]]==S[j])
					ml++;
				else{
					op = 0;
					break;
				}
			}
		}

		//cout<<op<<" "<<S<<" mirror: "<<ml<<" simetric: "<<sl<<endl;

		if(S.size()==1){
			if(sl==1){
				cout<<S<<" -- is a mirrored palindrome.\n\n";
				continue;
			}else{
				cout<<S<<" -- is a regular palindrome.\n\n";
				continue;
			}
		}

		int N = S.size()%2?(S.size()+1)/2:S.size()/2;

		if(op==0)
			cout<<S<<" -- is not a palindrome.\n";
		else if(sl>=N)
			cout<<S<<" -- is a mirrored palindrome.\n";
		else if(ml+sl>=N)
			cout<<S<<" -- is a mirrored string.\n";
		else
			cout<<S<<" -- is a regular palindrome.\n";
		cout<<endl;
	}
	return 0;
}
