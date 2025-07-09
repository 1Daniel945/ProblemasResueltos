#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define finc(i,x,n,c)for(int i=x; i<(int)n; i+=c)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    fastio()
    int n;cin in n;
    int a[7];
    fr(i,0,7)cin in a[i];
    int x=0,s=0;
    while(s<n){
        fr(i,0,7)if(a[i]>0&&s<n)s+=a[i],x=i+1;
    }
    cout p x p"\n";
    return 0;
}