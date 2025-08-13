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
    int n, m; cin in n;
    vector<pair<int, bool>>a(n);
    fr(i, 0, n) cin in a[i].ff;
    cin in m;
    vector<pair<int, bool>>b(m);
    fr(i, 0, m) cin in b[i].ff;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int x = 0;
    fr(i, 0, n) {
      fr(j, 0, m){
        if(abs(a[i].ff - b[j].ff) <= 1 && a[i].ss == 0 && b[j].ss == 0){
          x++;
          a[i].ss = 1;
          b[j].ss = 1;
        }
      }
    }
    cout p x p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}