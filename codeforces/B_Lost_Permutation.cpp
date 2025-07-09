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
    int t, n, s; cin in t;
    while(t--){
        cin in n in s;
        vector<int>a(n), per; map<int, bool>mp, mp1;
        fr(i, 0, n){
            cin in a[i], mp[a[i]] = 1, per.push_back(a[i]);
        }
        int sm = 0, x = 1;
        while(sm < s){
            if(mp[x] == 0) sm += x, per.push_back(x), mp[x] = 1;
            else x++;
        }
        if(sm != s) cout p "NO\n";
        else{
            int sz = per.size(); bool isT = 1;
            fr(i, 0, sz) mp1[per[i]] = 1;
            fr(i, 0, sz){
                if(mp1[i + 1] == 0){
                    isT = 0;
                    break;
                }
            }
            isT ? cout p "YES\n" : cout p "NO\n";
        }
    }
}             

int main(){
    fast_io
    solve();
    return 0;
}            