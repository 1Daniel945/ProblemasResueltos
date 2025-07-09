#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second;
typedef long long ll;
using namespace std;

void solve(){
    int a[4];
    fr(i, 0, 4) cin in a[i];
    //a[0] numero de viajes planeados n
    //a[1] numero de viajes cubiertos m
    //a[2] precio de un boleto de un viaje
    //a[3] precio de un boleto de m viajes
    int mnS = 0;
    while(true){
        if(a[0] <= 0) break;
        if(a[0] - a[1] >= 0 && a[3] < a[2] * a[1]){
            mnS += a[3];
            a[0] -= a[1];
        }
        else if(a[3] <= a[2] || (a[0] - a[1] < 0 && a[3] < a[2] * a[0])){
            mnS += a[3];
            a[0] -= a[1];
        }
        else{
            mnS += a[2];
            a[0]--;
        }
    }
    cout p mnS p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}