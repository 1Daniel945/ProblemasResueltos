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
    int t, n;
    cin in t;
    while(t--) {
        cin in n;
        int a = n, b = 1;
        vector<int>perm;
        fr(i, 0, n) {
            if(i % 2 == 0) {
                perm.pb(a);
                a--;
            }
            else {
                perm.pb(b);
                b++;
            }
        }
        reverse(perm.begin(), perm.end());
        fr(i, 0, n) cout p perm[i] p out(i, n);
    }   
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}