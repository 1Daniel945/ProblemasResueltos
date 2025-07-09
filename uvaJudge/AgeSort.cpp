#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main() {
    fastio
    int n;
    while(cin in n, n != 0){
        v(x, int);
        int a;
        fr(i, 0, n)cin in a, x.push_back(a); 
        sort(x.begin(), x.end());
        cout p x[0];
        fr(i, 1, x.size()){
            cout p " " p x[i];
        }
        cout p "\n";
    }
    return 0;
}
