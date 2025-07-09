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
    int t; cin in t;
    pair<double, double>pii;
    double x = 0;
    while(t--){
        cin in pii.first in pii.second;
        x += (pii.first / 100) * (pii.second * 0.25);
    }
    printf("%.2lf\n", x);
}

int main(){
    fastio
    solve();
    return 0;
}