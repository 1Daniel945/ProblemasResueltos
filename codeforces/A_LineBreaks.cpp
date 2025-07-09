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
typedef long long ll;
using namespace std;

void solve(){
    int t, n, m; cin in t;
    while(t--){
        cin in n in m;
        int x = 0;
        vector<string>vs(n);
        vector<int>sz;
        fr(i, 0, n) cin in vs[i], sz.push_back(vs[i].size());
        if(sz[0] > m) cout p "0\n";
        else{
            int y = sz[0];
            x++;
            fr(i, 1, sz.size()){
                if(y + sz[i] <= m){
                    y += sz[i];
                    x++;
                }
                else break;
            }
            cout p x p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}