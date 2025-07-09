#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        double x = 0;
        x = 360 / (180 - (double) n);
        if(ceil(x) - x > 0) cout p "NO\n";
        else cout p "YES\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}