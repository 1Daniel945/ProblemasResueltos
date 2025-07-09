#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
typedef long long ll;
using namespace std;
 
void solve(){
    int t1, n, k; cin in t1;
    while(t1--){
        cin in n in k;
        vector<int>x(n);
        int rb = 0;
        fr(i, 0, n){
            cin in x[i];
        }
        int people = 0;
        fr(i, 0, n){
            if(x[i] >= k){
                rb += x[i];
                x[i] = 0;
            }
            else{
                if(x[i] == 0 && rb > 0){
                    x[i] += 1;
                    rb--;
                    people++;
                }
            }
        }
        cout p people p "\n";
    }
}
 
int main(){
    fastio
    solve();
    return 0;
}