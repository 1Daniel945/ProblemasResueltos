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
    int n,t,a;
    cin in n in t;
    map<int,int>mp;
    fr(i,1,n+1)mp[i]=0;
    while (t--){
        cin in a;
        mp[a]++;
    }
    fr(i,1,n+1)cout p mp[i] p "\n";
    return 0;
}