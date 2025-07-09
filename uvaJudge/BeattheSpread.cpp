#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    fastio()
    ll t,a,b;cin in t;
    while(t--){
        cin in a in b;
        if(a==b)cout p a p " 0\n";
        else{
            ll x=(a-b)/2;
            ll y=a-x;
            if(x<0)cout p "impossible\n";
            else if((a>b)&&(abs(y-x)<=a&&abs(y-x)<=b)){
                cout p y p " " p x p "\n";
            }
            else cout p "impossible\n";
        }
    }
    return 0;
}