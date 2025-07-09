#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        int mx = 1e5;
        fr(i, 0, n){
            fr(j, 0, n){
                if(i != j){
                    mx = min(abs(a[i] - a[j]), mx);
                }
            }
        }
        cout p mx p "\n";
    }
    return 0;
}
