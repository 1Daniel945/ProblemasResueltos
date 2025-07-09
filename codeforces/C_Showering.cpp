#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t; cin in t;
    vector<int>a(3);
    while(t--){
        fr(i, 0, 3) cin in a[i];
        bool f = 0;
        pair<int, int>pp;
        int x = 1e9;
        fr(i, 0, a[0]){
            cin in pp.ff in pp.ss;
            if(i == 0) {
                if(pp.ff >= a[1]) f = 1;
                x = pp.ss;
            }
            else {
                if(pp.ff - x >= a[1]) f = 1;
                x = pp.ss;
            }
        }
        if(f == 0 && a[2] - x >= a[1]) f = 1;
        f == 1 ? cout p "YES\n" : cout p "NO\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}