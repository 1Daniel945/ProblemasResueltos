#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int t, n, d; cin in t;
    while(t--){
        cin in n in d;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        bool b = 0;
        fr(i, 0, n) {
            if(a[i] > d) {
                b = 1;
                break;
            }
        }
        //Caso base
        if(b == 0) cout p "YES\n";
        else {
            sort(a.begin(), a.end());
            //Caso base
            if(n == 1 && a[0] <= d) cout p "YES\n";
            else{
                if(a[0] + a[1] <= d) cout p "YES\n";
                else cout p "NO\n";
            }
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}