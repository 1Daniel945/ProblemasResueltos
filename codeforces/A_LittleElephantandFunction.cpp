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
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio();
    int n;cin in n;
    int perm[n];
    fr(i,0,n){
        perm[i]=i+1;
    }
    if(n>1){
        fi(i,n,1){
            swap(perm[i],perm[i-1]);
        }
    }
    fr(i,0,n){
        if(i<n-1){
            cout p perm[i] p" ";
        }
        else{
            cout p perm[i] p"\n";
        }
    }
    return 0;
}