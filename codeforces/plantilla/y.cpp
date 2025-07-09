#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n, m;
    cin in n in m;
    vector<int>b(m);
    map<int, pair<int, int>>mp, mp1;
    fr(i, 0, m) cin in b[i];
    fr(i, 1, n + 1){
        //Positions and Likes
        mp[i].ff = i, mp[i].ss = 0;
        //Better and worse
        mp1[i].ff = i, mp1[i].ss = i;
    }
    fr(i, 0, m){
        mp1[b[i]].ss = max(mp1[b[i]].ss, mp[b[i]].ff);
        //Increase likes number
        if(mp[b[i]].ff != 1){
            mp[b[i]].ss++;
            if(mp[b[i]].ss >= mp[b[i] - 1].ss){
                //Swap positions
                mp[b[i]].ff--;
                mp[b[i] - 1].ff++;
                mp1[b[i]].ff = min(mp1[b[i]].ff, mp[b[i]].ff);
            }
        }
    }
    fr(i, 1, n + 1){
        cout p mp1[i].ff p " " p mp1[i].ss p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
} 