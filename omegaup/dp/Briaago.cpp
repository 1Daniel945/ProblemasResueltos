#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

vector<int>prefix(1005);

ll mx = 0;
ll op1 = 0, op2 = 0;

int briaago(int x, int y, int tSum){
    if(x == y) return mx;
    op1 = tSum - prefix[x - 1];
    op2 = tSum - prefix[y - 1];
    x++;
    y--;
    return max(op1, op2);
}

void solve(){
    int n; cin in n;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    prefix[0] = a[0];
    //Calcular prefix sum
    fr(i, 1, n) prefix[i] = prefix[i - 1] + a[i];
    cout p briaago(0, n, prefix[n - 1]) p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}