#include <bits/stdc++.h>
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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, n; cin in t;
    while (t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        if(n < 3) cout p "NO\n";
        else{
            bool f = 0;
            fr(i, 0, n){
                fi(j, n - 1, 0){
                    if(i != j){
                        if(a[i] == a[j]){
                            int mx = max(i, j);
                            int mn = min(i, j);
                            if(mx - mn > 1){
                                f = 1;
                                break;
                            }
                        }
                    }
                }
            }
            f == 1 ? cout p "YES\n" : cout p "NO\n";
        }
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}