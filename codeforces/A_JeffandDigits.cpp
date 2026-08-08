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
    int n; cin in n;
    vector<int>v(n);
    fr(i, 0, n) cin in v[i];
    if(count(v.begin(), v.end(), 5) == n) cout p "-1\n";
    else {
        int fives = count(v.begin(), v.end(), 5);
        int zeros = n - fives;
        while((fives * 5) % 9 != 0) {
            fives--;
        }
        string s = "";
        fr(i, 0, fives) s.pb('5');
        fr(i, 0, zeros) if(s != "0") s.pb('0');
        cout p s p "\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}  