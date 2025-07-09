#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=(int)n; --i)
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
    int n,a,b; cin>>n;
    vp(v);
    bool x=0;
    fr(i,0,n){
        cin in a in b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    fr(i,0,n-1){
        if(v[i].first<v[i+1].first&&v[i].second>v[i+1].second){
            x=1;
            break;    
        }
    }
    x?cout p "Happy Alex\n":cout<<"Poor Alex\n";
    return 0;
}