#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
typedef long long ll;
using namespace std;

void solve(){
    double t, n; cin in t;
    while(t--){
        cin in n;
        if(n == 1) cout p "2\n";
        else{
            cout p (ll) min(ceil(n / 2), ceil(n / 3)) p "\n";
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}
