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
    fastio()
    int n;cin in n;
    int a[n];
    int x=1,mx=1;
    fr(i,0,n)cin in a[i];
    fr(i,0,n-1){
        if(a[i]<a[i+1])x++;
        mx=max(mx,x);
        if(a[i]>=a[i+1])x=1;
    }
    cout p mx p "\n";
    return 0;
}