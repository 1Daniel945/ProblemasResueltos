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
    string s, s1;
    unordered_map<int, int>mp;
    map<int, vector<int>>mp1;
    map<int, vector<string>>mp2;
    int x = 0;
    while(getline(cin, s)) {
        fr(i, 0, s.size()) mp[(int) s[i]]++;
        for(auto e : mp) mp1[e.ss].pb(e.ff);
        for(auto e : mp1) {
            sort(e.ss.begin(), e.ss.end(), greater<int>());
            for(auto e1 : e.ss) {
                s1.clear();
                s1 = (to_string(e1) + " " + to_string(e.ff));
                mp2[x].pb(s1);
            } 
        }
        x++;
        mp.clear();
        mp1.clear();
    }
    fr(i, 0, x) {
        for(auto e : mp2[x]) cout p e p "\n";
        if(i < x - 1) cout p "\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}