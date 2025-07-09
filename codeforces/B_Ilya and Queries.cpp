#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significant bit
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    string s; 
    int n, sz;
    cin in s in n;
    sz = s.size();
    vector<bool>a(sz);
    fr(i, 0, sz) if(s[i] == s[i + 1]) a[i + 1] = 1;
    vector<int>prefixSum(sz);
    prefixSum[0] = 0;
    fr(i, 1, sz) prefixSum[i] = prefixSum[i - 1] + a[i];
    pair<int, int>q;
    fr(i, 0, n){
        cin in q.ff in q.ss;
        cout p prefixSum[q.ss - 1] - prefixSum[q.ff - 1] p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}