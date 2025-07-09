#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n), b(n);
        fr(i, 0, n) cin in a[i], b[i] = a[i];
        if(is_sorted(a.begin(), a.end())) cout p "0\n";
        else{
            sort(b.begin(), b.end());
            int x = 0, ps = 0;
            fi(i, n, 0){
                if(a[i] != b[i]){
                    ps = i;
                    break;
                }
            }
            fr(i, 0, ps) x = max(x, a[i]);
            cout p x p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}