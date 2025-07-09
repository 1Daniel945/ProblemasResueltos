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
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        if(is_sorted(a.begin(), a.end())) cout p "YES\n";
        else{
            fr(i, 0, n - 1){
                //make operation
                int x = min(a[i], a[i + 1]);
                a[i] -= x;
                a[i + 1] -= x;
            }
            if(is_sorted(a.begin(), a.end())) cout p "YES\n";
            else cout p "NO\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}