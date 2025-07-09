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
    int n, k;
    cin in n in k;
    int mx = max(n, k);
    int e = 6 - (mx - 1);
    double x = (double)e / 6;
    string ss = to_string(x).substr(0, 4);
    ss == "0.83" ? cout p "5/6\n" : 
    ss == "0.66" ? cout p "2/3\n" :
    ss == "0.50" ? cout p "1/2\n" :
    ss == "0.33" ? cout p "1/3\n" :
    ss == "0.16" ? cout p "1/6\n" :
    ss == "0.00" ? cout p "0/1\n" : cout p "1/1\n";
}

int main(){
    fast_io
    solve();
    return 0;
}