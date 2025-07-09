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
    int n,k;
    cin in n in k;
    int a[n];
    fr(i,0,n)cin in a[i];
    sort(a,a+n);
    int x=-1;
    if(k>0)x=a[k-1];
    int c=0;
    fr(i,0,n)if(a[i]<=x)c++;
    if((n>=1&&k==0)&&a[0]>=2)cout p a[0]-1 p "\n";
    else if(c==k)cout p x p "\n";
    else cout p "-1\n";
    return 0;
}
