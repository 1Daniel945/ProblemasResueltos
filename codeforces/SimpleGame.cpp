#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio()
    int n; cin in n;
    ll s1=0,s2=0,x;
    fr(i,0,n){
        cin in x;
        if(i+1%2==1)s1+=x;
        else s2+=x;
    }
    if(abs(s1-s2)%2==1)cout p "Alice\n";
    else cout p "Bob\n";
    return 0;
} 