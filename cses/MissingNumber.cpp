#include <bits/stdc++.h>
#define fr(i,x,n)for(ll i=x; i<(ll)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int n; cin in n;
    vector<int>a(n);
    map<int, bool>mp; 
    fr(i, 1, n + 1) mp[i] = 0;
    fr(i, 0, n - 1){
        cin in a[i];
        mp[a[i]] = 1;
    }
    fp(int, int, pp, mp){
        if(!pp.second) cout p pp.first p "\n";
    }
    return 0;
}