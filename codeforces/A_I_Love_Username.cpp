#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n; cin in n;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    int best = a[0], worse = a[0], x = 0;
    fr(i, 1, n){
        if(a[i] > best){
            best = a[i];
            x++;
        }
        if(a[i] < worse){
            worse = a[i];
            x++;
        }
    }
    cout p x p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}