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
    int t; cin in t;
    string s, s1;
    vector<char>l = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    while(t--) {
        cin in s;
        s1 = s;
        reverse(s1.begin(), s1.end());
        if(s != s1) cout p "no\n";
        else {
            bool b = 0;
            fr(i, 0, s.size()) {
                if(find(l.begin(), l.end(), s[i]) == l.end()) {
                    cout p "no\n";
                    b = 1;
                    break;
                }
            }
            if(b == 0) cout p "yes\n";
        }
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}  