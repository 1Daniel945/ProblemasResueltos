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
    int t, n; cin in t;
    while(t--){
        cin in n;
        map<int, vector<char>>mpv = 
        {{0, {' '}}, {1, {'.', ',', '?', '"'}}, {2, {'a', 'b', 'c'}}, 
        {3, {'d', 'e', 'f'}}, {4, {'g', 'h', 'i'}}, {5, {'j', 'k', 'l'}},
        {6, {'m', 'n', 'o'}}, {7, {'p', 'q', 'r', 's'}}, {8, {'t', 'u', 'v'}}, 
        {9, {'w', 'x', 'y', 'z'}}};
        vector<int>a(n), b(n);
        fr(i, 0, n) cin in a[i];
        fr(i, 0, n) cin in b[i];
        fr(i, 0, n){
            int x = (b[i] - 1) % mpv[a[i]].size();
            cout p mpv[a[i]][x];
        }
        cout p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}