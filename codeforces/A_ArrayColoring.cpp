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
#define grt greater<int>()
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int t; cin in t;
    while(t--){
        int n; cin in n;
        int a[n];
        fr(i,0,n){
            cin in a[i];
        }
        int mt = n / 2;
        if(n % 2 == 1)mt += 1;
        ll s1 = 0, s2 = 0;
        fr(i, 0, mt){
            s1 += a[i];
        }
        fr(i, mt, n){
            s2 += a[i];
        }
        if(s1 % 2 == 0 && s2 % 2 == 0)cout p "YES\n";
        else if(s1 % 2 == 1 && s2 % 2 == 1)cout p "YES\n";
        else cout p "NO\n";
    }
    return 0;
}