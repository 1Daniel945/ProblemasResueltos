#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t; cin in t;
    pair<char, int>pc;
    map<int, pair<bool, int>>mp, mp1;
    int left = 0, right = 0;
    while(t--){
        cin in pc.ff in pc.ss;
        if(pc.ff == 'L'){
            left++;
            mp[pc.ss].ff = 1;
            mp[pc.ss].ss = left;
        }   
        if(pc.ff == 'R'){
            right++;
            mp1[pc.ss].ff = 1;
            mp1[pc.ss].ss = right;
        }
        if(pc.ff == '?'){
            int ps = 0, mn;
            if(mp[pc.ss].ff == 1){
                ps = mp[pc.ss].ss;
                int x = left - ps;
                int y = (ps + left) - 1;
                int z = (ps + right) - 1;
                mn = min({x, y, z}); 
            }
            else if(mp1[pc.ss].ff == 1){
                ps = mp1[pc.ss].ss;
                int x = right - ps;
                int y = (ps + left) - 1;
                int z = (ps + right) - 1;
                mn = min({x, y, z});
            }
            cout p mn p "\n";
        }
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}