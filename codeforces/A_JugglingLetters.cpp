#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<string>vs(n);
        fr(i, 0, n) cin in vs[i];
        map<char, int>mp;
        fr(i, 0, n){
            fr(j, 0, vs[i].size()){
                mp[vs[i][j]]++;
            }
        }
        bool b = 0;
        for(auto e : mp){
            if(mp[e.ff] > 0 && mp[e.ff] % n != 0){
                b = 1;
                break;
            }
        }
        b == 0 ? cout p "YES\n" : cout p "NO\n";
    }
}   

int main(){
    fast_io
    solve();
    return 0;
}