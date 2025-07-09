#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

void solve(){
    int x, y;
    cin in x in y;
    if((x == 0 && y % 2 == 0) || (y == 0 && x % 2 == 0)) cout p "YES\n";
    else if((x == 0 && y == 0) || (x > y && x % 2 == 0) || (x > 0 && x % 2 == 0)) cout p "YES\n";
    else cout p "NO\n";
}   

int main(){
    fastio
    int t; cin in t;
    while(t--){
        solve();
    }
    return 0;
}

