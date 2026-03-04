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

struct pp {
    string name;
    int busy_bist;
};

void solve() {
    int b, v, q;
    while(cin in b in v) {
        vector<pp>nv(v);
        int ans = 0, ind = 0;
        fr(i, 0, v) {
            cin in nv[i].name in nv[i].busy_bist;
            ans += nv[i].busy_bist;
        }
        vector<string>RAM(ans), queries;
        fr(i, 0, ans) cin in RAM[i];
        cin in q;
        queries.resize(q);
        fr(i, 0, q) cin in queries[i];
        string s;
        unordered_map<string, ull>mp;
        fr(i, 0, v) {
            int x = nv[i].busy_bist;
            while(x--) {
                s += RAM[ind];
                ind++;
            }
            ull ans1 = 0, x1 = 1;
            fi(j, s.size(), 0) {
                if(s[j] == '1') ans1 += x1;
                x1 *= 2;
            }
            mp[nv[i].name] = ans1;
            s.clear();
        }
        fr(i, 0, q) {
            if(mp.count(queries[i])) {
                cout p queries[i] p "=" p mp[queries[i]] p "\n";
            }
            else cout p queries[i] p "=" p "\n";
        }
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}