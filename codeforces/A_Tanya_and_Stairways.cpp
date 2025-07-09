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
    int n; cin in n;
    vector<int>a(n), ans;
    fr(i, 0, n) cin in a[i];
    fr(i, 1, n){
        if(a[i] == 1) ans.push_back(a[i - 1]);
    }
    ans.push_back(a[n - 1]);
    cout p ans.size() p "\n";
    fr(i, 0, ans.size() - 1) cout p ans[i] p " ";
    cout p ans[ans.size() - 1] p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}