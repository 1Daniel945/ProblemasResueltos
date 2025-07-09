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
#define ip(arr) cout p arr[n - i - 1] p " \n"[i == n - 1];
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n), b(n);
        fr(i, 0, n) cin in a[i];
        int x = n;
        fr(i, 0, n){
            if(a[n - i - 1] >= 0){
                x -= a[n - i - 1];
                b[i] = x;
            }
            else b[i] = abs(a[n - i - 1]) + abs(x);
        }
        fr(i, 0, b.size()) ip(b);
    }
}

int main(){
    fast_io
    solve();
    return 0;
}