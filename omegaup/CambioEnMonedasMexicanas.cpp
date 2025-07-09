#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
using namespace std;

int main(){
    fastio()
    int n;cin in n;
    int x=0;
    n>=500?x+=n/500,n=n%500:x;
    n>=200?x+=n/200,n=n%200:x;
    n>=100?x+=n/100,n=n%100:x;
    n>=50?x+=n/50,n=n%50:x;
    n>=20?x+=n/20,n=n%20:x;
    n>=10?x+=n/10,n=n%10:x;
    n>=5?x+=n/5,n=n%5:x;
    n>=2?x+=n/2,n=n%2:x;
    n>=1?x+=n/1:x;
    cout p x p "\n";
    return 0;
}