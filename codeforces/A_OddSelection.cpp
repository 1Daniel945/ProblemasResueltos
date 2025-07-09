#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
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
    int t, x, n; cin in t;
    while(t--){
        cin in x in n;
        vector<int>a(x);
        int even = 0, odd = 0;
        fr(i, 0, x){
            cin in a[i];
            a[i] % 2 == 0 ? even++ : odd++;
        }
        bool f = 0;
        if(n == x && ac(a.begin(), a.end(), 0) % 2 == 0) f = 1;
        else if(x == 1 && odd == 0) f = 1;
        else if(even == 0 && n % 2 == 0) f = 1;
        else if(odd == 0) f = 1;
        f == 0 ? cout p "Yes\n" : cout p "No\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}