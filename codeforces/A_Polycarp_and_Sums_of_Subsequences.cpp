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
    int t; cin in t;
    vector<ll>a(7);
    while(t--){
        a.clear();
        fr(i, 0, 7) cin in a[i];
        ll mx = a[6];
        vector<ll>x;
        fr(i, 0, 6){
            if(a[i] < mx && x.size() < 2){
                x.push_back(a[i]);
                mx -= a[i];
            }
            else if(x.size() == 2 && a[i] == mx){
                x.push_back(a[i]);
            }
        }
        fr(i, 0, 2){
            cout p x[i] p " ";
        }
        cout p x[2] p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}