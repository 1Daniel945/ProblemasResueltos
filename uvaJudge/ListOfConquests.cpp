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
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve(){
    int t; cin in t;
    map<string, vector<string>>mp;
    string s, s1, s2;
    cin.ignore();
    while(t--) {
        s1.clear();
        getline(cin, s);
        fr(i, 0, s.size()) {
            if(s[i] == ' ' && !s1.empty()) {
                if(s1.back() != ' ') s1.pb(s[i]);
            }
            else if(s[i] != ' ') s1.pb(s[i]);
        }
        int space = s1.find_first_of(' ');
        s2 = s1.substr(0, space);
        mp[s2].pb(s1.substr(space + 1, (int) s.size() - (int) s2.size()));
    }
    for(auto e : mp) cout p e.ff p " " p e.ss.size() p "\n";
}

int main(){
    fast_io
    solve();    
    return 0;
}