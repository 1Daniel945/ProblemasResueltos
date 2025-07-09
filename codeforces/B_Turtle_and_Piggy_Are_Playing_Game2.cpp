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
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n){
            cin in a[i];
        }
        sort(a.begin(), a.end());
        int md = round((double)n / 2);
        if(n % 2 == 0){
            cout p a[md] p "\n";
        }
        else cout p a[md - 1] p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}