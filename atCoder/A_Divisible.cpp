#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fri(i,x,n,increment)for(int i=x; i<(int)n; i+=increment)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x,a,b) vector<pair<a,b>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int n,k,v; cin in n in k;
    v(x,int);
    fr(i,0,n){
        cin in v;
        if(v%k==0)x.push_back(v/k);
    }
    fr(i,0,x.size()){
        if(i<(int)x.size()-1)cout p x[i] p " ";
        else cout p x[i] p "\n";
    }
    return 0;
}