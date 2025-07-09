#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
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
    int t,a,b;cin in t;
    while(t--){
        cin in a in b;
        while (b--){
            fr(i,0,a){
                fr(j,0,i+1){
                    cout p i+1;
                }
                cout p "\n";
            }
            fi(i,a,1){
                fr(j,0,i){
                    cout p i;
                }
                cout p "\n";
            }
            cout p "\n";
        }
    }
    return 0;
}