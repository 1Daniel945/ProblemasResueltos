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
    string s;
    int n;
    cin in n in s;
    vector<int>allDivisor;
    fi(i, n, 1){
        if(n % i == 0) allDivisor.pb(i);
    }
    reverse(allDivisor.begin(), allDivisor.end());
    for(auto e : allDivisor){
        reverse(s.begin(), s.begin() + e);
    }
    cout p s p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
} 