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
    int t,n;cin>>t;
    while(t--){
        cin in n;
        int a[n];
        int mx=0,ps=0;
        fr(i,0,n){
            cin in a[i];
            if(a[i]>mx){
                mx=a[i];
                ps=i;
            }
        }
        int mx1=0;
        fr(j,0,n){
            if(j!=ps){
                if(a[j]>mx1){
                    mx1=a[j];
                }
            }
        }
        fr(i,0,n){
            if(i!=ps)a[i]-=mx;
            else a[i]-=mx1;
        }
        fr(i,0,n){
            if(i<n-1)cout p a[i] p " ";
            else cout p a[i] p"\n";
        }
    }
    return 0;
}