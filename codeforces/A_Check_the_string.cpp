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
    string s; cin in s;
    if(is_sorted(s.begin(), s.end())){
        int a = 0, b = 0, c = 0;
        fr(i, 0, s.size()){
            if(s[i] == 'a') a++;
            if(s[i] == 'b') b++;
            if(s[i] == 'c') c++;
        }
        if(a >= 1 && b >= 1 && c >= 1 && (a == c || b == c)){
            cout p "YES\n";
        }
        else cout p "NO\n";
    }
    else cout p "NO\n";
}

int main(){
    fast_io
    solve();
    return 0;
} 