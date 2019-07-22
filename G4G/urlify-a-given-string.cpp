#include <bits/stdc++.h>

using namespace std;

int main(){
    int T,x;
    cin>>T;
    cin.ignore();

    while(T--){
        string line;
        getline(cin,line);
        cin>>x;
        cin.ignore();
        for(int i=0 ; i<line.length() ; i++)
            if(line[i]==' ')cout<<"%20";
            else cout<<line[i];
        cout<<"\n";
    }
    return 0;
}