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
    string s, s1, s2, s3;
    map<int, int>mp;
    while(getline(cin, s)) {
        if(count(s.begin(), s.end(), '#')) {
            stringstream ss(s1);
            while(ss >> s2) {
                fr(i, 0, s2.size()) {
                    if(s2[i] == '-' || s2[i] == '\'') continue;
                    else if(s2[i] == '!' || s2[i] == '?' || s2[i] == '.' || s2[i] == ',') {
                        if(!s3.empty()) {
                            mp[(int) s3.size()]++;
                        }
                        s3.clear();
                    }
                    else s3.pb(s2[i]);
                }
                if(!s3.empty()) {
                    mp[(int) s3.size()]++;
                    s3.clear();
                }
            }
            for(auto e : mp) {
                cout p e.ff p " " p e.ss p "\n";
            }
            cout p "\n";
            mp.clear();
            s1.clear();
            s2.clear();
            s3.clear();
        }
        else {
            if(s.back() != '-') s1.append(s + " ");
            else s1.append(s);
        }
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}