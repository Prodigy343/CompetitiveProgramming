#include <bits/stdc++.h>

using namespace std;

struct bigz_t {
 explicit bigz_t(int sign_ = POSITIVE, int digits = 0) : sign(sign_), v(digits, 0) {}
 bigz_t(int sign_, vector<int>& v_) : sign(sign_) {v.swap(v_);}
 bigz_t(bigz_t& rhs) : sign(rhs.sign) {v.swap(rhs.v);}
 bigz_t& operator =(bigz_t& rhs) {sign = rhs.sign; v.swap(rhs.v); return *this;}
 bigz_t clone() const {return bigz_t(sign, vector<int>(v));}
 bigz_t& normalize() {while (!v.empty() && v.back() == 0) v.pop_back(); return *this;}
 void swap(bigz_t& rhs) {v.swap(rhs.v); std::swap(sign, rhs.sign);}
 static const int BASE = 1000000000, DIGITS = 9, POSITIVE = 0, NEGATIVE = 1;
 static const i64 BASEL = (i64)BASE, BASE2 = BASEL * BASEL;
 int sign; vector<int> v;
};

int main(){

    int N,a;
    scanf("%i",&N);

    long long int c = 1;
    for(int i=0;i<N;i++){
        scanf("%i",&a);
        c*=a;
    }

    printf("%I64d\n",c);
    return 0;
}