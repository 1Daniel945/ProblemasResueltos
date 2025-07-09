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
    int n, m, a; 
    while(cin in n in m){
        map<int, vector<int>>mps;
        fr(i, 0, n){
            cin in a;
            mps[a].push_back(i);
        }
        pair<int, int>pr;
        fr(i, 0, m){
            cin in pr.ff in pr.ss;
            if((int) mps[pr.ss].size() < pr.ff) cout p "0\n";
            else cout p mps[pr.ss][pr.ff - 1] + 1 p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}