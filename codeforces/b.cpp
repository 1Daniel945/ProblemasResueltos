#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main() {
    int t, n;cin in t;
    while (t--) {
        cin in n;
        int a[n];
        int mx=0;
        int mn=1e9;
        fr(i,0,n){
            cin in a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        cout p mx-mn p "\n";
    }
    return 0;
}

