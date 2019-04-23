#include <bits/stdc++.h>

using namespace std;

int main(){
	double H,M;
	while(scanf("%lf:%lf",&H,&M)==2&&(H!=0||M!=0))printf("%.3lf\n",min(abs(H*30+(float(M/2.000f))-(M*6)),360.f-abs(H*30+(float(M/2.000f))-(M*6))));
	return 0;
}