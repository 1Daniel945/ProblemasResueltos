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
#define tab "\t"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin in n in k;
    if(n < 2 * k + 1) cout p "-1\n";
    else {
        int mn = 1, start = 1, tmp = 0;
        vector<pair<int, int>>vp;
        map<int, int>mp;
        fr(i, 1, n + 1) {
            fr(j, 0, k) {
                if(mp[mn] == k) mn++;
                if(start == i) start++;
                if(start > n) start = mn;
                if(tmp == 0) tmp = start;
                if(mp[start] < k) {
                    mp[start]++;
                    vp.pb({i, start});
                    start++;
                }
            } 
            start = tmp;
            tmp = 0;
        }
        cout p vp.size() p "\n";
        fr(i, 0, vp.size()) {
            cout p vp[i].ff p " " p vp[i].ss p "\n";
        }
    }
}


int32_t main() {
    fast_io
    solve();    
    return 0;
}  