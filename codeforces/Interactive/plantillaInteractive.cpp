#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb push_back
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int n; cin in n;
    vector<int>a(n);
    int mx = INT_MIN;
    fr(i, 0, n) cin in a[i]; 
    fr(i, 0, n){
        if(a[i] < 0 || sqrt(abs((double)a[i])) - floor(sqrt(abs((double)a[i]))) != 0){
            mx = max(mx, a[i]);   
        }
    }
    cout p mx p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}