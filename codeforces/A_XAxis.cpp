#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    int t; cin in t;
    while(t--){
        fastio()
        int a[3];
        fr(i,0,3)cin in a[i];
        sort(a, a+3, greater<int>());
        int s=0;
        s+=abs(a[0]-a[1]);
        s+=abs(a[1]-a[1]);
        s+=abs(a[1]-a[2]);
        cout p s p "\n";
    }
    return 0;
}