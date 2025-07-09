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
    int n; 
    cin in n;
    vector<int>a(n);
    map<int, int>mp;
    fr(i, 0, n) {
        cin in a[i];
        mp[i + 1] = a[i];
    }
    bool b = 0;
    int a1 = -1, b1 = - 1, c = -1;
    fr(i, 1, n + 1){
        a1 = a[i - 1];
        b1 = mp[a1];
        c = mp[b1];
        if(mp[c] == a1){
            b = 1;
            break;
        }
    }
    b == 1 ? cout p "YES\n" : cout p "NO\n";
}

int main(){
    fast_io
    solve();
    return 0;
}