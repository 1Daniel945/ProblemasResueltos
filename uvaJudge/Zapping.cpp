#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
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
int MOD = 1e9 + 7;

void solve() {
    int a, b;
    while(cin in a in b){
        if(a == -1 && b == -1) return;
        if(a == b) cout p "0\n";
        else{
            int x = (100 - (max(a, b))) + min(a, b);
            if(x == 100) cout p "1\n";
            else{
                cout p min(x, max(a, b) - min(a, b)) p "\n";
            }
        }    
    }
}

int32_t main() {
    fast_io
    solve();
    return 0;
}