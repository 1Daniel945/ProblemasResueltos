#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int a[5];
    fr(i, 0, 5) cin in a[i];
    vector<int>dragons(a[4]);
    int x = 0;
    fr(i, 0, dragons.size()){
        dragons[i] = i + 1;
        if(dragons[i] % a[0] == 0) dragons[i] = -1;
        else if(dragons[i] % a[1] == 0) dragons[i] = -1;
        else if(dragons[i] % a[2] == 0) dragons[i] = -1;
        else if(dragons[i] % a[3] == 0) dragons[i] = -1;
    }
    x = count(dragons.begin(), dragons.end(), -1);
    cout p x p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}