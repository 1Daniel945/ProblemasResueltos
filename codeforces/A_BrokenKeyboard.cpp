#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
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

void solve(){
    int t; string s;
    cin in t;
    while(t--){
        cin in s;
        map<char, int>mp;
        char last = s[0];
        set<char>st;
        mp[last]++;
        fr(i, 1, s.size()){
            if(s[i] == last) mp[s[i]]++;
            else{
                if(mp[last] % 2 == 1) st.insert(last);
                mp[last] = 0;
                last = s[i];
                mp[last]++;
            }
        }
        if(mp[last] % 2 == 1) st.insert(last);
        for(char e : st) cout p e;
        cout p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  