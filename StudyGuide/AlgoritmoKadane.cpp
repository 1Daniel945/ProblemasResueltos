#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

//DHASIA WEZKA QUEEN

int main(){
    //Algoritmo de kadane para calcular maxima suma
    fastio()
    int n;
    cin in n;
    vector<int>a(n);
    fr(i,0,n)cin in a[i];
    int mxs = INT_MIN;
    int sma = 0;
    fr(i, 0, n){
        sma += a[i];
        sma < a[i] ? sma = a[i] : a[i];
        mxs = max(mxs, sma);
    }
    cout p mxs p "\n";
    return 0;
}
