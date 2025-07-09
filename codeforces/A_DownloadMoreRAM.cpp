#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, n, RAM; cin in t;
    while(t--){
        cin in n in RAM;
        vector<pair<int, int>>vp(n);
        fr(i, 0, n) cin in vp[i].ff;
        fr(i, 0, n) cin in vp[i].ss;
        sort(vp.begin(), vp.end());
        fr(i, 0, n){
            if(vp[i].ff <= RAM){
                RAM += vp[i].ss;
            }
        }
        cout p RAM p "\n";
    }    
}   

int main(){
    fast_io
    solve();
    return 0;
}