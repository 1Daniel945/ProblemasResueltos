#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    int n;cin in n;
    ll a[n];
    fr(i,0,n){
        cin in a[i];
    }
    cout p a[0];
    ll mx=a[0];
    fr(i,1,n){
        a[i]+=mx;
        mx=max(a[i],mx);
        cout p " " p a[i];
    }
    cout p "\n";
    return 0;
}