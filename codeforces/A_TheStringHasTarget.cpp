#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, n; cin in t;
    string s;
    while(t--){
        cin in n in s;
        int mn = 122;
        fr(i, 0, s.size()) mn = min(mn, s[i] - 'a');
        int x = -1;
        fr(i, 0, s.size()){
            if(s[i] == (mn + 'a')){
                x = i;
            }
        }
        char c = s[x];
        s.erase(s.begin() + x);
        cout p c p s p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}