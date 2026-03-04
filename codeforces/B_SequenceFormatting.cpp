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
    string s, s1 = "", s2 = "";
    getline(cin, s);
    fr(i, 0, s.size()) {
        if(s[i] == ',') {
            if(s1.back() == ' ') s1.pop_back();
            s1.pb(s[i]);
        }
        else if(s[i] != ' ') s1.pb(s[i]);
        else if(isdigit(s1.back())) s1.pb(' ');
    }
    int cDot = 0;
    fr(i, 0, s1.size()) {
        if(s1[i] == '.') {
            if(!s2.empty()) {
                if(cDot == 0 && s2.back() != ' ') s2.pb(' ');
            }
            s2.pb(s1[i]);
            cDot++;
            if(cDot == 3) cDot = 0;
        }
        else if(s1[i] == ',') {
            s2.pb(s1[i]);
            s2.pb(' ');
        }
        else s2.pb(s1[i]);
    }
    if(s2.back() == ' ') s2.pop_back();
    cout p s2 p "\n";
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}