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
    int t, n, x = 0; cin in t;
    map<string, int>mp;
    map<char, int>mp1 = {
        {'A', 2}, {'B', 2}, {'C', 2},
        {'D', 3}, {'E', 3}, {'F', 3},
        {'G', 4}, {'H', 4}, {'I', 4},
        {'J', 5}, {'K', 5}, {'L', 5},
        {'M', 6}, {'N', 6}, {'O', 6},
        {'P', 7}, {'R', 7}, {'S', 7},
        {'T', 8}, {'U', 8}, {'V', 8},
        {'W', 9}, {'X', 9}, {'Y', 9},
    };
    string s, s1;
    fr(x, 0, t) {
        cin in n;
        fr(i, 0, n) {
            cin in s;
            fr(j, 0, s.size()) {
                if(isdigit(s[j])) {
                    s1 += s[j];
                }
                else if(isalpha(s[j])) {
                    s1 += to_string(mp1[s[j]]);
                }
                if(s1.size() == 3 && s[j] == '-') s1 += '-'; 
            }
            mp[s1]++;
            s1.clear();
        }
        set<pair<string, int>>st;
        for(auto e : mp) {
            if(e.ss > 1) st.insert({e.ff, e.ss});
        }
        for(auto e : st) {
            cout p e.ff p " " p e.ss p "\n";
        }
        mp.clear();
        if(x < t - 1) cout p "\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}