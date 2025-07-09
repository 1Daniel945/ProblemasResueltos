#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n, k, l, c, d, pp, nl, np;
    cin in n in k in l in c in d in pp in nl in np;
    k *= l; 
    k /= nl;
    pp /= np;
    c *= d; 
    cout p min({k, c, pp}) / n p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}