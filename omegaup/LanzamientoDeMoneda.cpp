#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
using namespace std;

int a[20],n;

void f(int pos){
    if(pos==n){
        for(int i=0; i<n; ++i){
            if(a[i]==0)cout p "A";
            else cout p "X";
        }
        cout<<"\n";
        return;
    }
    a[pos]=0;
    f(pos+1);
    a[pos]=1;
    f(pos+1);
}

int main(){
    fastio()
    cin>>n;
    f(0);
    return 0;
}