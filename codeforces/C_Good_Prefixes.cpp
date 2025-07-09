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
        vector<ll>a(n), prefix(n), mx(n);
        fr(i, 0, n) cin in a[i];
        prefix[0] = a[0];
        mx[0] = a[0];
        fr(i, 1, n) prefix[i] = prefix[i - 1] + a[i], mx[i] = max(mx[i - 1], a[i]);
        int x = 0;
        fr(i, 0, n){
            if((prefix[i] - mx[i]) == mx[i]) x++;
        }
        cout p x p "\n";
    }
}

int main(){
    fast_io 
    solve();
    return 0;
}