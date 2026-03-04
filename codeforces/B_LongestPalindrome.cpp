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
    int n, m, mx = 0;
    cin in n in m;
    vector<string>vs(n);
    map<string, bool>mp;
    string rev, out = "", out1 = "", x, left, right;
    fr(i, 0, n) cin in vs[i];
    //Buscar extremos del palindromo
    fr(i, 0, vs.size()) {
        int ps = -1;
        fr(j, i + 1, vs.size()) {
            if(!mp[vs[i]] && !mp[vs[j]]) {
                rev = vs[i];
                reverse(rev.begin(), rev.end());
                if(vs[j] == rev) {
                    out = vs[i];
                    out1 = vs[j];
                    ps = j;
                    mp[vs[i]] = 1;
                    mp[vs[j]] = 1;
                }
                else {
                    rev = vs[j];
                    reverse(rev.begin(), rev.end());
                    if(vs[i] == rev) {
                        out = vs[i];
                        out1 = vs[j];
                        ps = j;
                        mp[vs[i]] = 1;
                        mp[vs[j]] = 1;
                    }
                }
            }
        }
        //Buscar palindromos 
        reverse(out1.begin(), out1.end());
        if(!out.empty() && !out1.empty()) {
            left += out;
            right += out1;
        }
        fr(j, ps + 1, vs.size()) {
            rev = vs[j];
            reverse(rev.begin(), rev.end());
            if(rev == vs[j] && !mp[vs[j]]) {
                if((int) vs[j].size() > mx) {
                    mx = vs[j].size();
                    x = vs[j];
                }
                mp[vs[j]] = 1;
            }
        }
        reverse(out1.begin(), out1.end());
        out.clear();
        out1.clear();
    }
    left += x;
    if(left.empty() && right.empty()) cout p "0\n\n";
    else {
        cout p (left + right).size() p "\n";
        reverse(right.begin(), right.end());
        cout p left p right p "\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}