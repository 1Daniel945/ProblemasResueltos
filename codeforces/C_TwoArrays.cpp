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
    int t, n; cin in t;
    bool isT = 0;
    while(t--){
        cin in n;
        vector<int>a(n), b(n);
        fr(i, 0, n) cin in a[i];
        fr(i, 0, n) cin in b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        fr(i, 0, n) a[i] != b[i] ? a[i] += 1 : a[i];
        fr(i, 0, n){
            if(a[i] != b[i]){
                isT = 1;
                break;
            }
        }
        isT == 0 ? cout p "YES\n" : cout p "NO\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}