#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, n, j, sumIndex, digit;
	char N[1000], A[1000], B[1000];
	
	scanf("%i", &T);
	for(int i=1 ; i<=T ; i++){
		scanf("%s", N);
		n = strlen(N);
        j = n-1;
        sumIndex = 999;

        for(; j>=0; j--, sumIndex--){
            digit = N[j] - '0'; // cast to int
            
            if(digit == 7){
                A[sumIndex] = '5';
                B[sumIndex] = '2';
            }else if(digit == 8){
                A[sumIndex] = '5';
                B[sumIndex] = '3';
            }else if(digit == 9){
                A[sumIndex] = '6';
                B[sumIndex] = '3';
            }else{ //even cases except 8
                int half = floor(digit/2);
                A[sumIndex] = half + '0';
                B[sumIndex] = half + (digit%2) + '0';
            }

            if(j == 1 && N[0] == '1'){
                int number = 10 + N[1] - '0', half = floor(number/2);
                A[sumIndex] = half + '0';
                B[sumIndex] = half + (number%2) + '0';
                sumIndex--;
                break;
            }
        }

		printf("Case #%i: ", i);
        for(j=sumIndex+1 ; j<1000 ; j++)printf("%c", A[j]);
        printf(" ");
        for(j=sumIndex+1 ; j<1000 ; j++)printf("%c", B[j]);
        printf("\n");
	}
	
	return 0;
}