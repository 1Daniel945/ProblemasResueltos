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
    int t,n,a;cin in t;
    while (t--){
        cin in n;
        v(x,int);
        //Marcar lo que ya se coloco en la pemutacion
        mps(int,bool,mp);
        fr(i,0,2*n)cin in a,x.push_back(a);
        fr(i,0,2*n){
            if(mp[x[i]]==0){
                cout p x[i] p " ";
                mp[x[i]]=1;
            }
        }
        cout p "\n";
    }
    return 0;
}