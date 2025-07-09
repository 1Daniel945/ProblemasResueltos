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
#define out(i, n) (i == n ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        // 01 03 2025
        map<int, int>mp = {{0, 3}, {1, 1}, {3, 1}, {2, 2}, {5, 1}};
        if(n < 8) cout p "0\n";
        else{
            string s = "";
            int x = 0;
            fr(i, 0, n){
                if(a[i] == 0 || a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 5){
                    if(mp[a[i]] > 0) mp[a[i]]--;
                }
                if(mp[0] == 0 && mp[1] == 0 && mp[2] == 0 && mp[3] == 0 && mp[5] == 0){
                    x = i;
                    break;
                }
            }
            x == 0 ? cout p x p "\n" : cout p x + 1 p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}