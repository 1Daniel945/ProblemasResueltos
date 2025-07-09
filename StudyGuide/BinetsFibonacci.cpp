#include <bits/stdc++.h>
// Never say "I can't" without trying
typedef long long ll;
typedef unsigned long long ull;
#define rt0 return 0;
#define wh(x) while (x--)
#define fi(x, n) for (int i = x; i < n; ++i)
#define fj(x, n) for (int j = x; j < n; ++j)
#define fk(x) for (int k = 0; k < x; ++k)
#define fir(x, n) for (int r = x - 1; r >= n; --r)
#define in >>
#define p <<
#define vi(v) vector<int> v;
#define vp(v, x, y) vector<pair<x, y>> v;
#define pr(t, x,a,b) for (pair<a, b> t : x)
#define yesNo(x, y) x == y ? cout p "YES\n" : cout p "NO\n";
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define inp(x) freopen(to_string(x) + ".txt", "r", stdin);
#define out(x) freopen(to_string(x) + ".txt", "w", stdout);
#define F first
#define S second
using namespace std;

double f(double n){
    double x = pow(1+(sqrt(5)),n)-pow(1-(sqrt(5)),n);
    return x/((pow(2,n))*(sqrt(5)));
}

int main(){
    fastio();
    cout p f(3) p"\n";    
    rt0;
}