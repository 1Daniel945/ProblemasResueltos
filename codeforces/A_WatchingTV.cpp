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
#define ip(arr) cout p arr[n - i - 1] p " \n"[i == n - 1];
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        pair<string, int>pr;
        map<int, int>mp;
        fr(i, 0, n){
            cin in pr.ff in pr.ss;
            mp[pr.ss]++;
        }
        vector<int>channels;
        int mxFre = 0;
        for(auto e : mp){
            if(e.ss > mxFre) mxFre = e.ss;
        }
        for(auto e : mp){
            if(e.ss == mxFre) channels.push_back(e.ff);
        }
        int mn = INT_MAX;
        fr(i, 0, channels.size()){
            if(channels[i] < mn) mn = channels[i];
        }
        cout p mn p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}