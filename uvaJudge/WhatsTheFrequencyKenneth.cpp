#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    string s;
    while(getline(cin, s)){
        map<char, int>mp;
        int mx_freq = 0;
        fr(i, 0, s.size()){
            if(isupper(s[i]) || islower(s[i])){
                mp[s[i]]++;
                mx_freq = max(mx_freq, mp[s[i]]);
            }
        }
        for(auto e : mp){
            if(e.ss == mx_freq) cout p e.ff;
        }
        cout p " " p mx_freq p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;   
}