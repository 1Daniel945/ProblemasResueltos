#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
    fastio
    //Maximize the Last Element
    int t, n, a; cin in t;
    while(t--){
        cin in n;
        int mx = 0;
        fr(i, 0, n){
            cin in a;
            if(i % 2 == 0){
                mx = max(a, mx);
            }
        }
        cout p mx p "\n";
    }
    return 0;   
}