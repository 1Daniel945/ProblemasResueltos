#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significant bit
#define out(n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        int ans = 0, e = 0, odd = 0;
        fr(i, 0, n){
            cin in a[i], ans += a[i];
            a[i] % 2 == 0 ? e++ : odd++;
        }
        ans % 2 != 0 ? cout p "YES\n" : e > 0 && odd > 0 ? cout p "YES\n" : cout p "NO\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}