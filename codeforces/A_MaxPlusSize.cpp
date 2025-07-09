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
#define ss second;
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        vector<int>x, x1;
        fr(i, 0, n){
            cin in a[i];
            if(i % 2 == 0){
                x.push_back(a[i]);
            }
            else x1.push_back(a[i]);
        }
        if(n == 1){
            cout p a[0] + 1 p "\n"; 
        }
        else{
            int mx = *max_element(x.begin(), x.end());
            int mx1 = *max_element(x1.begin(), x1.end());
            cout p max(mx + x.size(), mx1 + x1.size()) p "\n";
        } 
    }
}

int main(){
    fastio
    solve();
    return 0;
}