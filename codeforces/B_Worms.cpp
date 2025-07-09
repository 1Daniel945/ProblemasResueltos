#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n, m, q; cin in n;
    vector<int>a(n), prefix(n);
    fr(i, 0, n) cin in a[i];
    map<int, int>mp;
    prefix[0] = a[0];
    fr(i, 0, n){
        if(i != 0) prefix[i] = a[i] + prefix[i - 1];
        mp[prefix[i]] = i;
    }
    cin in m;
    fr(i, 0, m){
        cin in q;
        int x = *lower_bound(prefix.begin(), prefix.end(), q);
    	cout p mp[x] + 1 p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}