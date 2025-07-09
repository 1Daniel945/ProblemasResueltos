#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int t,n,k;cin in t;
    while (t--){
        cin in n in k;
        int a[n],b[n];
        fr(i,0,n)cin in a[i];
        fr(i,0,n)cin in b[i];
        while (k--){
            int ps=0,ps2=0;
            int mx=0,mn=30;
            //find the min elemente of array a
            fr(i,0,n){
                if(a[i]<mn){
                    mn=a[i];
                    ps=i;
                }
            }
            //find the max elemente of array b
            fr(i,0,n){
                if(b[i]>mx){
                    mx=b[i];
                    ps2=i;
                }
            }    
            if(a[ps]<b[ps2]){
                swap(a[ps],b[ps2]);
            }
        }
        int x=0;
        fr(i,0,n)x+=a[i];
        cout p x p "\n";
    }
    return 0;
}