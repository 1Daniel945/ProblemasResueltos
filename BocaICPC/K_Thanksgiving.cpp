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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int n; cin in n;
    vector<bool>v(n, 0);
    vector<int>a(n);
    v[0] = 1;
    int lastGossip = 1;
    fr(i, 0, n) cin in a[i];
    lastGossip = a[0];
    v[lastGossip - 1] = 1;
    int firstGossip = lastGossip;
    lastGossip = a[lastGossip - 1];
    int x = 0;
    while(x < n){
        if(lastGossip == firstGossip || x == n){
            v[lastGossip - 1] = 1;
            break;
        }
        v[lastGossip - 1] = 1;
        lastGossip = a[lastGossip - 1];
        x++;
    }
    cout p count(v.begin(), v.end(), 1) p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}