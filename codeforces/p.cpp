#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    char c;
    int x = 1000, v;
    while(cin in c, c != 'S'){
        if(c == 'C'){
            cout p "$" p x p "\n";
        }
        if(c == 'R'){
            cin in v;
            x -= v;
        }
        if(c == 'D'){
            cin in v;
            x += v;
        }
    }
    return 0;
}