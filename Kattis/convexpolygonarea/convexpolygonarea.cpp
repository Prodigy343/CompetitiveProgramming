#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;

    point(){
        x = 0;
        y = 0;
    }

    point(int nx, int ny){
        this->x = nx;
        this->y = ny;
    }
};

double polyArea(vector<point> p){
    double t = 0;
    for(int i=0 ; i<p.size()-1 ; i++)t += ((p[i].x*p[i+1].y) - (p[i].y*p[i+1].x))/2.0f;
    t += ((p[p.size()-1].x*p[0].y) - (p[p.size()-1].y*p[0].x))/2.0f;
    return abs(t);
}

int main() {
	int N,M,x,y;
    vector<point> p;
    
    scanf("%i", &N);
    while(N--){
        p.clear();
        scanf("%i", &M);
        while(M--){
            scanf("%i %i", &x, &y);
            p.push_back(point(x,y));
        }
        double A = polyArea(p);
        printf("%.1f\n", A);

    }
	
	return 0;
}