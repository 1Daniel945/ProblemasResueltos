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
#define fastio ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio
    int t, n; cin in t;
    fr(i, 0, t){
        int jup = 0, jdn = 0;
        cin in n;
        int a[n];
        fr(j, 0, n){
            cin in a[j];
        }
        fr(j, 0, n - 1){
            if(a[j] > a[j + 1]){
                jdn++;
            }
            if(a[j] < a[j + 1]){
                jup++;
            }
        }
        cout p "Case " p i + 1 p ": "p jup p " " p jdn p"\n";
    }
    return 0;
}