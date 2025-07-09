#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, n, k, a, b; cin in t;
    while(t--){
        cin in n in k;
        map<int, int>mp;
        fr(i, 0, k){
            cin in a in b;
            mp[a] += b;
        }
        int s = 0;
        vector<pair<int, int>>vp;
        for(auto e : mp){
            vp.push_back({e.ss, e.ff});
        }
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());
        fr(i, 0, vp.size()){
            if(n > 0){
                s += vp[i].ff;
                n--;
            }
        }
        cout p s p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}