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
#define cf cout p flush
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, px, py, x, y; cin in t;
    string s;
    while(t--){
        cin in px in py in s;
        x = 0, y = 0;
        fr(i, 0, s.size()){
            if(s[i] == 'U' && y < py) y++;
            if(s[i] == 'D' && y > py) y--;
            if(s[i] == 'R' && x < px) x++;
            if(s[i] == 'L' && x > px) x--;
            if(px == x && py == y) break;
        }
        x == px && y == py ? cout p "YES\n" : cout p "NO\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}