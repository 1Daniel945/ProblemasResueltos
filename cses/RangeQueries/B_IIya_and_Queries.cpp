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
    int n, q;
    cin in n in q;
    vector<int>a(n), prefixSum(n);
    fr(i, 0, n) cin in a[i];
    //Make a prefix sum
    prefixSum[0] = a[0];
    fr(i, 1, n) prefixSum[i] = prefixSum[i - 1] + a[i];
    pair<ll, ll>pp;
    fr(i, 0, q){
        cin in pp.ff in pp.ss;
        //Base cases
        if(pp.ff == pp.ss) cout p a[pp.ff - 1] p "\n";
        else if(pp.ff == 1 && pp.ss == n) cout p prefixSum[n - 1] p "\n";
        //Make a sum in range r - l + a[r]
        else cout p prefixSum[pp.ss - 1] - prefixSum[pp.ff - 1] + a[pp.ff - 1] p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}