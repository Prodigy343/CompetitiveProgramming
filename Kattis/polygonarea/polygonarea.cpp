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

int polyOrientaiton(vector<point> p){
	long long int o = 0;
	for(int i=0 ; i<p.size()-1 ; i++)o += (p[i+1].x-p[i].x)*(p[i+1].y+p[i].y);
    o += (p[0].x-p[p.size()-1].x)*(p[0].y+p[p.size()-1].y);
    return o>0?1:0;
}

double polyArea(vector<point> p){
    double t = 0;
    for(int i=0 ; i<p.size()-1 ; i++)t += ((p[i].x*p[i+1].y) - (p[i].y*p[i+1].x))/2.0f;
    t += ((p[p.size()-1].x*p[0].y) - (p[p.size()-1].y*p[0].x))/2.0f;
    return abs(t);
}

int main() {
	int N,x,y;
    vector<point> p;

    while(1){
        scanf("%i", &N);
        if(N == 0)break;
        p.clear();
        while(N--){
            scanf("%i %i", &x, &y);
            p.push_back(point(x,y));
        }
        double A = polyArea(p);
    	int o = polyOrientaiton(p);
        printf("%s %.1f\n", o>0?"CW":"CCW",A);

    }
	
	return 0;
}