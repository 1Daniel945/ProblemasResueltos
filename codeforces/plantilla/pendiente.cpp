#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    ll n, m;
    cin in n in m;
    pair<int, int>pp;
    ll x = n * n; //Celdas totales
    vector<bool>mark(n + 1, 0);
    fr(i, 0, m - 1){
        cin in pp.ff in pp.ss;
        if(i == 0){
            x -= (n * 2) - 1;
            if(x < 0) cout p "0\n";
            else cout p x p " ";
        }
        else{
            x -= pp.ss + 1;
            if(x <  0) cout p "0\n";
            else cout p x p " ";
            mark[pp.ss] = 1;
        }
    }
    cin in pp.ff in pp.ss;
    if(m == 1) x -= (n * 2) - 1, cout p x p "\n";
    else{
        cout p x p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}