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
    int t, n, m; cin in t;
    while (t--){
        cin in n in m;
        vector<string>vs(n);
        set<string>st;
        fr(i, 0, n) cin in vs[i], st.insert(vs[i]);
        if(st.size() == 1) cout p "0\n";
        else{
            int mn = INT_MAX, x;
            fr(i, 0, n){
                fr(j, 0, n){
                    if(i != j){
                        x = 0;
                        fr(k, 0, m){
                            if(vs[i][k] != vs[j][k]){
                                if(vs[i][k] > vs[j][k]) x += vs[i][k] - vs[j][k];
                                else x += vs[j][k] - vs[i][k];
                            }
                        }
                        mn = min(x, mn);
                    }
                }
            }
            cout p mn p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
} 