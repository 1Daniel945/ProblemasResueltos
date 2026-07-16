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
    string s, s1, s2 = "XXXXXX";
    map<string, vector<string>>mp;
    while(cin in s) {
        if(s == s2) break;
        s1 = s;
        sort(s1.begin(), s1.end());
        mp[s1].pb(s);
    }
    while(cin in s, s != s2) {
        sort(s.begin(), s.end());
        if(mp.count(s)) {
            sort(mp[s].begin(), mp[s].end());
            for(auto e : mp[s]) cout p e p "\n";
        }
        else cout p "NOT A VALID WORD\n";
        cout p "******\n";
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}