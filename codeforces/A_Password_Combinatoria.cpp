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
    int t, n, d;
    cin in t;
    while(t--){
        cin in n;
        map<int, bool>mp;
        fr(i, 0, n){
            cin in d;
            mp[d] = 1;
        }
        int x = 0;
        fr(i, 0, 10) if(mp[i] == 0) x++;
        int factX = 1, factY = 1;
        fr(i, 1, x + 1) factX *= i; //Digitos que puedo usar
        fr(i, 1, (x - 2) + 1) factY *= i; //Cuantos digitos quedan de 0 a 9
        cout p (factX / (factY * 2)) * 6 p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}