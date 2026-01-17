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
    string s, s1 = ""; 
    vector<string>vs;
    while(getline(cin, s)) {
        bool is_script = 0;
        fr(i, 0, s.size()) {
            if(i == s.size() - 1) {
                if(isalpha(s[i])) {
                    s1 += tolower(s[i]);
                }
                else if(s[i] == '-') {
                    is_script = 1;
                }
            }
            else {
                if(isalpha(s[i]) || s[i] == '-') {
                    s1 += tolower(s[i]);
                }
                else if(s[i] == ' ' || !isalpha(s[i])) {
                    if(!s1.empty()) {
                        vs.pb(s1);
                        s1.clear();
                    }
                }
            }
        }
        if(!is_script && !s1.empty()) {
            vs.pb(s1);
            s1.clear();
            is_script = 0;
        }
    }
    sort(vs.begin(), vs.end());
    set<string>st(vs.begin(), vs.end());
    for(auto e : st) cout p e p "\n";
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}