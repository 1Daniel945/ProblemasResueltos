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
    int n, m, a; cin in n in m;
    map<int, int>mp;
    fr(i, 0, n) {
        cin in a;
        mp[a]++;
    }
    fr(i, 0, m){
        cin in a;
        mp[a]++;
    }
    vector<int>b;
    for(auto e : mp){
        if(e.ss == 1) b.push_back(e.ff);
    }
    cout p b.size() p "\n";
    for(auto e : b) cout p e p " ";
}

int main(){
    fast_io
    solve();
    return 0;
}