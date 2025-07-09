#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    int best=0, s=0;
    int n;cin in n;
    int a[n];
    fr(i,0,n)cin in a[i];
    fr(k,0,n){
        s=max(a[k],s+a[k]);
        best=max(best,s);
    }
    cout p best p "\n";
    return 0;
}