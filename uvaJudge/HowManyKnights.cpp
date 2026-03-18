#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i < (int) n; ++i)
#define fi(i, x, n) for(int i = (int) x - 1; i >= n; --i)
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
    int n, m;
    while(cin in n in m) {
        if(n == 0 && m == 0) return;
        else {
            int x = 0, y = n, z = m;
            if(n > m) swap(n, m);
            if(n == 1) x = m;
            else if(n == 2) x = 4 * (m / 4) + 2 * min(2, m % 4);
            else x = (n * m + 1) / 2;
            n = y, m = z;
            cout p x p " knights may be placed on a " p n p" row " p m p " column board.\n";
        }
    }   
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}