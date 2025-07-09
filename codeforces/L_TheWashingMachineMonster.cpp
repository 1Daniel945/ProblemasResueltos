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
    fastio();
    int t,n,m,k;cin in t;
    while (t--){
        cin in n in m in k;
        int a[n];
        fr(i,0,n)cin in a[i];
        vector<int>v;
        int ps=0,s;
        while (ps!=n){
            s=0;
            fr(i,ps,n){
                s+=a[i];
                v.push_back(s%m);
            }
            ps++;
        }
        sort(v.begin(),v.end(),greater<int>());
        ll ans=0;
        fr(i,0,k)ans+=v[i];
        cout p ans p"\n";
    }
    return 0;
}