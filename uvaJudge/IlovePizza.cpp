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
    int t; cin in t;
    string s;
    while(t--){
        cin in s;
        map<char, int>mp;
        fr(i, 0, s.size()){
            mp[s[i]]++;
        }
        mp['A'] /= 3;
        mp['R'] /= 2;
        int x = 1e9;
        x = min({x, mp['M'], mp['A'], mp['R'], mp['G'], mp['R'], mp['I'], mp['T']});
        cout p x p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
} 