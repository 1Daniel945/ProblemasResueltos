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
    string s;
    vector<string>words;
    while(cin in s, s != "#") {
        sort(s.begin(), s.end());
        words.pb(s);
    }
    cin.ignore();
    int v, sz = 0, index = 0;
    while(getline(cin, s), s != "#") {
        sort(s.begin(), s.end());
        v = 0;
        for(string word : words) {
            sz = (int) word.size();
            index = 0;
            for(char c : s) {
                if(c != ' ') {
                    if(c == word[index]) {
                        if(index + 1 > sz) break;
                        index++;
                    }
                }
            }
            if(index == sz) v++;
        }
        cout p v p "\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}