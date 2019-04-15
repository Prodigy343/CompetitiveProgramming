#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    char str[1000003];

    scanf("%i", &T);

    while(T--){
        scanf("%s", str);
        int n = strlen(str), p = n%2, j=-1;

        int b = n/2;
        if(!p)b--;

        for(int i=b ; i>=0 ; i--)
            if(str[i] != str[n-i-1]){
                j = i;
                break;
            }

        if(j==-1){

            for(int i=b ; i>=0 ; i--){
                if(str[i] == '9'){
                    str[i] = '0';
                    str[n-i-1] = '0';
                }else{
                    str[i]++;
                    if(!p)str[n-i-1]++;
                    break;
                }
            }

        }else{
        	
            if(str[j] > str[n-j-1]){
                for(; j>=0 ; j--)str[n-j-1] = str[j];
            }else{
            	int i=b;
                for(; i>=0 ; i--){
	                if(str[i] == '9'){
	                    str[i] = '0';
	                    str[n-i-1] = '0';
	                }else{
	                    str[i]++;
	                    if(!p)str[n-i-1]++;
	                    break;
	                }
                }
                for(; i>=0 ; i--)str[n-i-1] = str[i];
                
            }
        }

        if(str[0] == '0'){
            str[n-1]='1';
            printf("1%s\n", str);
        }else
            printf("%s\n", str);
    }

    return 0;
}