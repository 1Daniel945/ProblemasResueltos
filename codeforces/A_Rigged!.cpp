#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        bool f = 0;
        vector<pair<ll, ll>>vp(n);
        fr(i, 0, n) cin in vp[i].ff in vp[i].ss;
        fr(i, 1, n){
            if(vp[i].ff >= vp[0].ff && vp[i].ss >= vp[0].ss){
                f = 1;
                break;
            }
        }
        f == 1 ? cout p "-1\n" : cout p vp[0].ff p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}