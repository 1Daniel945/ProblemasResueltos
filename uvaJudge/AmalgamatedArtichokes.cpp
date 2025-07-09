#include<bits/stdc++.h>
#define fr(i,a,b) for(int i=a; i<(int)b; ++i)
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define in >>
#define ou <<
using namespace std;

int main(){
    int p;
    while(cin in p){
        int a, b, c, d, n;
        cin in a in b in c in d in n;
        double mxd = 0, mx = 0;
        fr(i, 1, n + 1){
            double x = p * (sin(a * i + b) + cos(c * i + d) + 2);
            if(x > mx) mx = x;
            mxd = max(mxd, mx - x);
        }
        printf("%.6lf\n", mxd);
    }
    return 0;
}
