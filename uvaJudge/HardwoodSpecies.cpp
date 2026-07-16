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
#define out(i, n) (i == (int) n - 1 ? "" : "\n")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve(){
    int t; cin in t;
    string s, blank;
    vector<string>vs;
    cin.ignore();
    getline(cin, s);
    map<string, double>mp;
    int c = 0, c1 = 0;
    while(getline(cin, s)) {
        if(s.empty()) {
            c1++;
            double x = (double) 100 / c;
            for(auto e : mp) {
                cout p e.ff p " " p fixed p setprecision(4) p e.ss * x p "\n";
            }
            if(c1 < t) cout p "\n";
            c = 0;
            mp.clear();
        }
        else {
            mp[s]++;
            c++;
        }
    }
    if(!mp.empty()) {
        double x = (double) 100 / c;
        for(auto e : mp) {
            cout p e.ff p " " p fixed p setprecision(4) p e.ss * x p "\n";
        }
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}