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
#define out(i, n) (i == (int) n - 1 ? "\n" : "")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve(){
    int n, k; 
    multiset<pair<char, int>>st;
    map<int, bool>mp;
    string s, s2;
    cin in n in k in s;
    fr(i, 0, s.size()) st.insert({s[i], i});
    for(auto e : st){
        if(k > 0){
            mp[e.ss] = 1;
            k--;
        }
        else break;
    }
    fr(i, 0, s.size()){
        if(mp[i] == 0) s2 += s[i];
    }
    cout p s2 p "\n";
}
int main(){
    fast_io
    solve();
    return 0;
} 