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

void solve(){
    string s, s1, s2;
    map<string, int>mp;
    vector<string>words;
    set<string>st, st1; 
    while(getline(cin, s), s != "#") {
        stringstream ss(s);
        while(ss >> s1) {
            st.insert(s1);
            words.pb(s1);
        }
    }
    fr(i, 0, words.size()) {
        fr(j, 0, words[i].size()) {
            words[i][j] = tolower(words[i][j]);
        }
        sort(words[i].begin(), words[i].end());
        mp[words[i]]++;
    }
    for(auto e : mp) {
        if(e.ss == 1) {
            for(auto e1 : st) { 
                s2 = "";
                fr(i, 0, e1.size()) s2 += tolower(e1[i]);
                sort(s2.begin(), s2.end());
                if(s2 == e.ff) st1.insert(e1);
            }
        }
    }
    for(auto e : st1) cout p e p "\n";
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}  