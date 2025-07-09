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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, n, a, x; cin in t;
    while(t--){
        cin in n;
        set<int>st;
        multiset<int>mts;
        map<int, bool>mp;
        x = -1;
        fr(i, 0, n){
            cin in a;
            if(mp[a] == 0) mp[a] = 1;
            else mts.insert(a);
            st.insert(a);
        }
        for(auto e : st) cout p e p " ";
        for(auto e : mts) cout p e p " ";
        cout p "\n";
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}