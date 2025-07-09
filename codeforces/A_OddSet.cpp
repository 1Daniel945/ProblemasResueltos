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
 
int main() {
    fastio();
    int t,n,a;cin in t;
    while (t--){
        cin in n;
        int cp=0,ci=0;
        fr(i,0,2*n){
            cin in a;
            if(a%2==0)cp++;
            else ci++;
        }
        if(cp==ci)cout p "Yes\n";
        else cout p "No\n";
    }
    return 0;
}