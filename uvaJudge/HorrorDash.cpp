#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
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
    fastio();
    int t,n,x;cin in t;
    fr(j,1,t+1){
        cin in n;
        int m=0;
        fr(i,0,n){
            cin in x;
            m = max(m,x); 
        }
        cout p "Case " p j p ": " p m p"\n";
    }
    return 0;
}