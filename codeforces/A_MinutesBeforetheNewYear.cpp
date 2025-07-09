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
    int t,h,m;cin in t;
    while (t--){
        cin in h in m;
        if(h==23){
            cout p 60-m p "\n";
        }
        else{
            int r=60-m; 
            int x=23-h;
            x*=60;
            x=1440-x;       
            x-=r;
            cout p 1440-x p "\n";
        }
    }
    return 0;
}