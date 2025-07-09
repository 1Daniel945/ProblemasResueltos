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

map<pair<ll, ll>, ll>mp;

ll f(double x, double a){
    //Base cases
    if(a == 0){
        if(mp[{x, a}] == 0){
            mp[{x, a}] = floor((x + 1) / 2);
        }
        return mp[{x, a}];
    }
    if(x == 0){
        return 2 * a;
    }
    if(mp[{floor(x / 2), a}] == 0){
        mp[{floor(x / 2), a}] = f(floor(x / 2), a);
    }
    if(mp[{x, floor(a / 2)}] == 0){
        mp[{x, floor(a / 2)}] = f(x, floor(a / 2));
    }
    return mp[{floor(x / 2), a}] + mp[{x, floor(a / 2)}];
}

void solve(){
    double a, b;
    cin in a in b;
    cout p f(a, b);
}

int main(){
    fastio
    solve();
    return 0;
}