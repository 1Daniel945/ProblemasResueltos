#include <bits/stdc++.h>
#define fr(i,a,b)for(int i=a; i<b; ++i)
#define p <<
#define in >>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t, n, a; cin in t;
    while(t--){
        cin in n;
        int mx, mxd = INT_MIN;
        cin in mx;
        fr(i, 1, n){
            cin in a;
            mxd = max(mxd, mx - a);
            mx = max(mx, a);
        }
        cout p mxd p "\n";
    }
    return 0;
}