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
    int t; cin in t;
    string s;
    cin.ignore();
    map<char, int>mp;
    fr(i, 0, 26) mp[i] = 0;
    vector<pair<int, char>>vp, vp1;
    int mx = 0;
    while(t--) {
        getline(cin, s);
        fr(i, 0, s.size()) {
            if(isalpha(s[i])) {
                mp[toupper(s[i])]++;
                mx = max(mx, mp[toupper(s[i])]);
            }
        }
    }
    vector<vector<char>>vvc(mx + 1);
    for(auto e : mp) {
        if(e.ss > 0) vvc[e.ss].pb(e.ff);
    }
    fi(i, mx + 1, 0) {
        fr(j, 0, vvc[i].size()) {
            cout p vvc[i][j] p " " p i p "\n";
        }
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}