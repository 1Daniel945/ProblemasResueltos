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
    int n; string s, s2;
    cin in n in s;
    vector<pair<char, int>>a;
    if(count(s.begin(), s.end(), s[0]) == n){
        cout p "NO\n";
        return;
    }
    fr(i, 0, s.size()){
        a.push_back({s[i], i + 1});
    }
    sort(a.begin(), a.end());
    fr(i, 0, s.size()){
        if(s[i] > a[i].ff){
            cout p "YES\n" p i + 1 p " " p a[i].ss p "\n";
            return;
        }
    }
    cout p "NO\n";
}

int main(){
    fast_io
    solve();
    return 0;
} 