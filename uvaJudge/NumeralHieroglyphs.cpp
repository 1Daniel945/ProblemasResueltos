#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : "")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve() {
    int t; string s;
    cin in t;
    while (t--) {
        cin in s;
        map<char, int> mp = {
            {'B', 0}, {'U', 0}, {'S', 0}, 
            {'P', 0}, {'F', 0}, {'T', 0}, 
            {'M', 0}
        };
        vector<int>a;
        fr(i, 0, s.size()) {
            if(s[i] == 'B') a.pb(1);
            if(s[i] == 'U') a.pb(2);
            if(s[i] == 'S') a.pb(3);
            if(s[i] == 'P') a.pb(4);
            if(s[i] == 'F') a.pb(5);
            if(s[i] == 'T') a.pb(6);
            if(s[i] == 'M') a.pb(7);
        }
        if(!is_sorted(a.begin(), a.end())) {
            reverse(a.begin(), a.end());
        }
        if(is_sorted(a.begin(), a.end())) {
            bool b = 0;
            fr(i, 0, s.size()) {
                mp[s[i]]++;
                if(mp[s[i]] > 9) {
                    b = 1;
                    break;
                }
            }
            if(b) cout p "error\n";
            else {
                ll ans = 0;
                ans += mp['B'];
                ans += mp['U'] * 10;
                ans += mp['S'] * 100;
                ans += mp['P'] * 1000;
                ans += mp['F'] * 10000;
                ans += mp['T'] * 100000;
                ans += mp['M'] * 1000000;
                cout p ans p "\n";
            }
        }
        else cout p "error\n";
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}