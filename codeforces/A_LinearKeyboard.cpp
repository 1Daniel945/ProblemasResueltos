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
    string s, s1;
    while(t--){
        cin in s in s1;
        map<char, int>mp;
        fr(i, 0, s.size()) mp[s[i]] = i + 1;
        vector<int>a;
        int x = 0;
        fr(i, 0, s1.size()){
            a.push_back(mp[s1[i]]);
        }
        fr(i, 1, a.size()){
            x += abs(a[i] - a[i - 1]);
        }
        cout p x p "\n";
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}