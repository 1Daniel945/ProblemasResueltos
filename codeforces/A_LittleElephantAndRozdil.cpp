#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == 3 - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int n; cin in n;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    int mn = *min_element(a.begin(), a.end());
    int c = count(a.begin(), a.end(), mn);
    if(c == 1) {
        cout p distance(a.begin(), find(a.begin(), a.end(), mn)) + 1 p "\n";
    }
    else cout p "Still Rozdil\n";
}

int main(){
    fast_io
    solve();
    return 0;
}