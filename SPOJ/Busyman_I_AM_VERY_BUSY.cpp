#include<bits/stdc++.h>
#define fr(i, a, b) for(int i = a; i < b; ++i)
#define in >>
#define p <<
#define ff first
#define ss second
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<pair<int, int>>vp(n);
        fr(i, 0, n){
            cin in vp[i].ss in vp[i].ff;
        }
        sort(vp.begin(), vp.end());
        int mx = 1, last = - 1;
        fr(i, 0, n){
            if(last == -1) last = vp[i].ff;
            else if(vp[i].ss >= last){
                mx++;
                last = vp[i].ff;
            }
        }
        cout p mx p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}