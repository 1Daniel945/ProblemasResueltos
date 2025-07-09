#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    string s; 
    vector<int>a(26);
    int k, sm = 0;
    cin in s in k;
    fr(i, 0, 26) cin in a[i];
    fr(i, 0, s.size()) sm += ((i + 1) * a[s[i] - 'a']);
    int x = (int) s.size() + k;
    int mx = *max_element(a.begin(), a.end());
    fr(i, s.size() + 1, x + 1) sm += i * mx;
    cout p sm p "\n";
}

int main(){ 
    fast_io
    solve();
    return 0;
}