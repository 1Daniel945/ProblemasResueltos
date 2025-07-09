#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;

void solve(){
    int n, m; 
    cin in n in m;
    vector<int>a(n), b(m);
    fr(i, 0, n) {
        cin in a[i];
    }
    fr(i, 0, m) cin in b[i];
    sort(a.begin(), a.end());
    fr(i, 0, m){
        auto x = upper_bound(a.begin(), a.end(), b[i]);
        cout p x - a.begin() p out(i, m);
    }
}   

int main(){
    fast_io
    solve();
    return 0;
}