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
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int a, b;
    while(cin in a in b){
        if(a == 0 && b == 0) break;
        vector<int>alice(a), betty(b), x, y;
        fr(i, 0, a) cin in alice[i];
        fr(i, 0, b) cin in betty[i];
        int c = 0, c1 = 0;
        fr(i, 0, a){
            if(find(betty.begin(), betty.end(), alice[i]) == betty.end() && (find(x.begin(), x.end(), alice[i]) == x.end())){
                c++;
                x.push_back(alice[i]);
            }
        }
        fr(i, 0, b){
            if(find(alice.begin(), alice.end(), betty[i]) == alice.end() && (find(y.begin(), y.end(), betty[i]) == y.end())){
                c1++;
                y.push_back(betty[i]);
            }
        }
        cout p min(c, c1) p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}