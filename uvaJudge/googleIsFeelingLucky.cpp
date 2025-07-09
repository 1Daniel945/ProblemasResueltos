#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int t,n;cin in t;
    string s;
    fr(j,0,n){
        int mx=0;
        vector<pair<string,int>>x;
        fr(i,0,10){
            cin in s in n;
            x.push_back({s,n});
            mx=max(mx,n);
        }
        cout p "Case #" p j+1 p ":\n";
        fr(i,0,x.size()){
            if(x[i].second==mx){
                cout p x[i].first p "\n";
            }
        }
    }
    return 0;
}