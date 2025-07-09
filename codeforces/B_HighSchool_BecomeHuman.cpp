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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int x, y;
    cin in x in y;
    //el logaritmo sirve para transformar operaciones exponenciales en multiplicaciones
    double x1 = log(x) * y;
    double y1 = log(y) * x;
    if(x1 == y1) cout p "=\n";
    else if(x1 > y1) cout p ">\n";
    else cout p "<\n";
}

int main(){
    fast_io
    solve();
    return 0;
}