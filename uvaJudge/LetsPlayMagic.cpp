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
    int n; 
    while(cin in n, n != 0) {
        string key, value;
        map<int, string>mp;
        vector<bool>mark(n + 1, 0);
        int ans = 1;
        fr(i, 0, n) {
            cin in key in value;
            int sz = value.size();
            while(true) {
                if(ans > n) ans = 1;
                if(!mark[ans] && sz > 0) sz--;
                if(!mark[ans] && sz == 0) {
                    mark[ans] = 1;
                    mp[ans] = key;
                    break;
                }
                ans++;
            }
        }
        fr(i, 1, n + 1) cout p mp[i] p out(i, n + 1);
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}