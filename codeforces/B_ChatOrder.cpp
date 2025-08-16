#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
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
int MOD = 1e9 + 7;

void solve(){
    int n; string s;
    cin in n;
    vector<pair<string, int>>vp;
    map<string, bool>talkBefore;
    map<string, int>mp;
    int c = 1, x;
    fr(i, 0, n){
        cin in s;
        x = vp.size();
        if(talkBefore[s] == 0) {
            talkBefore[s] = 1;
            vp.pb({s, c});
            mp[s] = x;
        }
        else{
            vp[mp[s]].ss = c + 1;
            c++;
        }
        c++;
    }
    sort(vp.begin(), vp.end(), [](const auto& a, const auto& b){
        return a.ss > b.ss;
    });
    for(auto e : vp) cout p e.ff p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
} 