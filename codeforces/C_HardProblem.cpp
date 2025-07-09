#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    vector<int>arr(4);
    while(t--){
        fr(x, 0, 4) cin in arr[x];
        int f = arr[0], f2 = arr[0], out = 0;
        if(f - arr[1] >= 0){
            out += arr[1];
            f -= arr[1];
        }
        else out += f, f = 0;
        if(f2 - arr[2] >= 0){
            out += arr[2];
            f2 -= arr[2];
        }
        else{
            out += f2, f2 = 0;
        }
        if(f + f2 > 0){
            f += f2;
            if(f >= arr[3]) out += arr[3];
            else out += f;
        }
        cout p out p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}