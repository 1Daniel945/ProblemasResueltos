#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        int x = 0;
        int pr = 0, im = 0;
        fr(i, 0, n){
            cin in a[i];
            if(i % 2 == 0 && a[i] % 2 != 0){
                x++;
            }
            if(i % 2 == 1 && a[i] % 2 != 1){
                x++;
            }
            if(a[i] % 2 == 0) pr++;
            else im++;
        }
        int mid = ceil((double) n / 2);
        if(x == 0) cout p "0\n";
        else if(pr != mid || im != (n / 2)) cout p "-1\n";
        else cout p x/2 p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}
