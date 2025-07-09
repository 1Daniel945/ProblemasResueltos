#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x, d, n) vector<d>x(n);
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

void solve(){
    int n; cin in n;
    vector<double>x(n);
    fr(i, 0, n) cin in x[i];
    int c = 0;
    while(true){
        sort(x.begin(), x.end());
        if(round((double) accumulate(x.begin(), x.end(), 0) / n) == 5){
            break;
        }
        if(x[0] < 5) x[0] = 5, c++;
    }
    cout p c p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}