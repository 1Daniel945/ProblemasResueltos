#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
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
    int n, k, sm = 0;
    cin in n in k;
    vector<pair<int, int>>a(n);
    vector<int>ind;
    fr(i, 0, n) cin in a[i].ff, a[i].ss = i + 1;
    sort(a.begin(), a.end());
    fr(i, 0, n){
        if(sm + a[i].ff <= k){
            sm += a[i].ff;
            ind.pb(a[i].ss);
        }
        else break;
    }
    cout p (int) ind.size() p "\n";
    fr(i, 0, ind.size()){
        cout p ind[i] p out(i, ind.size());
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  