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
    int t, t1;
    string s, s1;
    double x;
    map<string, int>mp;
    cin in t in t1;
    ofstream a;
    while(t--) {
        cin in s in x;
        mp[s] = (x * 10);
    }
    cin.ignore();
    vector<string>vs;
    bool isT = 0;
    fr(i, 0, t1) {
        getline(cin, s);
        stringstream ss(s);
        x = 0;
        vs.clear();
        while(ss >> s1) vs.pb(s1);
        fr(i, 0, vs.size() - 2) {
            x += mp[vs[i]];
        }
        isT = 0;
        string sing = vs[vs.size() - 2];
        int c = stoi(vs[vs.size() - 1]) * 10; 
        if(sing == ">") {
            if(x > c) isT = 1;
        }
        else if(sing == "<") {
            if(x < c) isT = 1;
        }
        else if(sing == "=") {
            if(x == c) isT = 1;
        }
        else if(sing == ">=") {
            if(x >= c) isT = 1;
        }
        else if(sing == "<=") {
            if(x <= c) isT = 1;
        }
        cout p "Guess #" p i + 1 p " was " p (isT ? "correct.\n" : "incorrect.\n");
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}