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
int MOD = 1e9 + 7;

void solve(){
    int t, n, m;
    cin in t;
    fr(j, 0, t){
        cin in n in m;
        cin.ignore();
        vector<string>vs(n), vs1(m);
        fr(i, 0, n) getline(cin, vs[i]);
        fr(i, 0, m) getline(cin, vs1[i]);
        set<string>st, st1;
        for(auto e : vs){
            for(auto e1 : vs1){
                st.insert(e + e1);
            }
        }
        cout p "Case " p j + 1 p ": " p (int) st.size() p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}