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
#define out(i, n) (i == (int) n - 1 ? "\n" : "")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve() {
    int t; cin in t;
    string s, s1, s2;
    while(t--) {
        cin in s;
        s1.clear();
        s2.clear();
        double x = 0, x1 = 0, a = 0, a1 = 0;
        //evitar errores cuando es solo la variable sola
        fr(i, 0, s.size()) {
            if(s[i] == 'x') {
                if(!isdigit(s2.back())) {
                    s2.pb('1');
                    s2.pb('x');
                }
                else s2.pb('x');
            }
            else s2.pb(s[i]);
        }
        s = s2;
        int pt = s.find('=');
        //previous left simplification
        fr(i, 0, pt) {
            if(s[i] == 'x' && !s1.empty()) {
                x += stod(s1);
                s1.clear();
            }
            else if(s[i] == '+' || s[i] == '-') {
                if(s1.empty() && s[i] == '-') s1.pb(s[i]);
                else if(isdigit(s1.back()) && !s1.empty()) {
                    a += stod(s1);
                    s1.clear();
                    s1.pb(s[i]);
                }
            }
            else if(s[i] != 'x') s1.pb(s[i]);
        }
        if(!s1.empty()) {
            if(s1.back() == 'x') x += stod(s1);
            else a += stod(s1);
            s1.clear();
        }
        //previous right simplification
        fr(i, pt + 1, s.size()) {
            if(s[i] == 'x' && !s1.empty()) {
                x1 += stod(s1);
                s1.clear();
            }
            else if(s[i] == '+' || s[i] == '-') {
                if(s1.empty() && s[i] == '-') s1.pb(s[i]);
                else if(isdigit(s1.back()) && !s1.empty()) {
                    a1 += stod(s1);
                    s1.clear();
                    s1.pb(s[i]);
                }
            }
            else if(s[i] != 'x') s1.pb(s[i]);
        }
        if(!s1.empty()) {
            if(s1.back() == 'x') x1 += stod(s1);
            else a1 += stod(s1);
        }
        double rx = x - x1;
        double ra = a1 - a;
        if(rx == 0 && ra == 0) cout p "IDENTITY\n";
        else if(rx == 0 && ra != 0) cout p "IMPOSSIBLE\n";
        else {
            double ans = floor((double)ra /rx) == 0 ? 0 : floor((double)ra / rx);
            cout p ans p "\n";
        }
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}