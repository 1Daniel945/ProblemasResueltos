#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t, n, m; cin in t;
    while(t--){
        cin in n in m;
        ll x, y, x2, y2;
        cin in x in y in x2 in y2;
        int c = 0, c1 = 0;
        if(x - 1 >= 1) c++;
        if(x + 1 <= n) c++;
        if(y + 1 <= m) c++;
        if(y - 1 >= 1) c++;
        if(x2 - 1 >= 1) c1++;
        if(x2 + 1 <= n) c1++;
        if(y2 + 1 <= m) c1++;
        if(y2 - 1 >= 1) c1++;
        cout p min(c, c1) p "\n";
    }
    return 0;   
}