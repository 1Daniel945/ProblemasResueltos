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
    fastio()
    int t,n;cin in t;
    while (t--){
        cin in n;
        int a[n],mx=0,mn=0,ans=0;
        fr(i,0,n){
            cin in a[i];
            if(a[i]>mx)mx=a[i];
        }
        mn=mx;
        fr(i,0,n)a[i]<mn?mn=a[i]:mn;
        fr(i,0,n)a[i]-=mn,ans+=a[i];
        cout p ans p "\n";
    }    
    return 0;
}