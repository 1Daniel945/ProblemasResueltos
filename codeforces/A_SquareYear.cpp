#include <bits/stdc++.h>
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

void solve(){
    int t, n; cin in t;
    while (t--){
        cin in n;
        int x = sqrt(n), y = -1, z = -1;
        fr(i, 0, x + 1){
            fr(j, 0, x + 1){
                if(i + j == x && pow((i + j), 2) == n){
                    y = i;
                    z = j;
                }
            }
        }
        if(y == -1 && z == -1) cout p "-1\n";
        else cout p y p " " p z p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  