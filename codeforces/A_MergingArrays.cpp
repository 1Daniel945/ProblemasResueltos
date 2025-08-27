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
    int n, m; cin in n in m;
    vector<int>a(n), b(m), c;
    fr(i, 0, n) cin in a[i];
    fr(i, 0, m) cin in b[i];
    int p1 = 0, p2 = 0;
    while(true){
        if(p1 < n && p2 < m){
            if(a[p1] <= b[p2]){
                c.pb(a[p1]);
                p1++;
            }
            else if(b[p2] <= a[p1]){
                c.pb(b[p2]);
                p2++;
            }
        }
        else{
            if(p1 < n){
                c.pb(a[p1]);
                p1++;
            }
            if(p2 < m){
                c.pb(b[p2]);
                p2++;
            }
        }
        if(p1 == n && p2 == m) break;
    }
    fr(i, 0, c.size()) cout p c[i] p out(i, c.size());
}

int main(){
    fast_io
    solve();
    return 0;
} 