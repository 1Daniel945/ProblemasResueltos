#include <bits/stdc++.h>
#define fi(x,n)for(int i=x; i<n; ++i)
#define fj(x,n)for(int j=x; j<n; ++j)
#define fk(x,n)for(int k=x; k<n; ++k)
#define fr(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main() {
    fastio();
    ll t,n;cin in t;
    while (t--)
    {
        cin in n;
        ll a[n];
        fi(0,n)cin in a[i];
        sort(a,a+n);
        ll s=0;
        fi(1,n){
            s+=(a[i]-a[i-1]);
        }
        cout p s p"\n";
    }
    return 0;
}