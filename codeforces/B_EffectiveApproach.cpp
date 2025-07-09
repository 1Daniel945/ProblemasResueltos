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
#define lsb(x) ((x) & -(x))
typedef long long ll; 
using namespace std; 

void solve(){ 
    int n, m, q; cin in n;
    map<int, int>mp, mp1;
    vector<int>a(n), b(n);
    fr(i, 0, n){
        cin in a[i];
        mp[a[i]] = i + 1;
        int x = n - i - 1;
        b[x] = a[i];
        mp1[a[i]] = x + 1;
    }
    cin in m;
    ll ans = 0, ans1 = 0;
    fr(i, 0, m){
        cin in q;
        ans += mp[q];
        ans1 += mp1[q];
    }
    cout p ans p " " p ans1 p "\n";
} 
        
int main(){ 
    fast_io 
    solve(); 
    return 0; 
}