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
typedef double db;
using namespace std;

int main(){
    fastio()
    int t,n;cin in t;
    while(t--){
        cin in n;
        int a[n];
        fr(i,0,n)cin in a[i];
        sort(a,a+n);
        if(n==1)cout p "YES\n";
        else{
            int x=0;
            fi(i,n,1)if(a[i]>=a[i-1]&&(abs(a[i]-a[i-1])<=1))x++;
            if(x==n-1)cout p "YES\n";
            else cout p "NO\n";
        }
    }
    return 0;
}