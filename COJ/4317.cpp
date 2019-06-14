#include <bits/stdc++.h>

using namespace std;

bool is_vowel[CHAR_MAX] = { false };

int main(){
    ios_base::sync_with_stdio(false);//boost cin
    cin.tie(NULL);

    int P;
    cin>>P>> std::ws;
    is_vowel['a'] = true;
    is_vowel['e'] = true;
    is_vowel['i'] = true;
    is_vowel['o'] = true;
    is_vowel['u'] = true;
    while(P--){
        string line;
        getline(cin, line);
        for(int i=0;i<line.size();i++)
            if(is_vowel[line[i]])
                printf("%cp%c",line[i],line[i]);
            else
                printf("%c",line[i]);
        printf("\n");
    }
    return 0;
}