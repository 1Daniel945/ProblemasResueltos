#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(ll)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio
    int t; cin in t;
	ll n;
	while(t--){
		cin in n;
		ll s = n;
		while(n / 2 > 0){
			s += n / 2;
			n /= 2;
		}
		cout p s p "\n";
	}
    return 0;
}