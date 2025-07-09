#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    double a, b;
    cin in a in b;
    if(a == b) cout p "0\n";
    else{
        double x = max(a, b);
        double y = min(a, b);
        double r = (x - y) / 10;
        int r1 = ceil(r);
        cout p r1 p "\n";
    }
    return 0;   
}
