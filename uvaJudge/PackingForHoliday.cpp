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
    int t;cin in t;
    fr(i,0,t){
        int a[3];
        bool x=0;
        fr(i,0,3)cin in a[i];
        fr(i,0,3){
            if(a[i]>20){
                x=1;
                break;
            }
        }
        !x?cout p "Case " p i+1 p ": good\n":cout p "Case " p i+1 p ": bad\n";
    }
    return 0;
}
