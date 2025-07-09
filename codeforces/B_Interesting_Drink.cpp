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
    int n; cin in n;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    int q, c; cin in q;
    sort(a.begin(), a.end());
    fr(i, 0, q){
        cin in c;
        int out = distance(a.begin(), upper_bound(a.begin(), a.end(), c));
        cout p out p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}