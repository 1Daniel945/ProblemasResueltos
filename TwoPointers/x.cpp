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
    int n, k;
    cin in n in k;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    int r = 0, l = 0;
    int ans = 0, sum = 0;
    while(r < l){
    
        r++;
    }
    cout p ans p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}

/*ll sm = 0, ans = 0;
while(r < n){
    sm += a[r];
    while (sm > k){
        sm -= a[l++];
    }
    ans = max(ans, r - l + 1LL);
    r++;
}
cout p ans p "\n";*/