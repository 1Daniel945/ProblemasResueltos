#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i < (int) n; ++i)
#define fi(i, x, n) for(int i = (int) x - 1; i >= n; --i)
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

void solve() {
    int n, x;
    while(cin in n, n != 0) {
        vector<int>a(n), b(n + 1);
        fr(i, 0, n) {
            cin in a[i];
            b[a[i]] = i + 1;
        }
        x = 0;
        fr(i, 0, n) {
            if(b[i + 1] != i + 1) {
                int current_ps = b[i + 1] - 1; 
                int current_val = a[i]; 
                swap(a[i], a[current_ps]);
                b[current_val] = current_ps + 1;
                b[i + 1] = i + 1;
                x++;
            }
        }
        x % 2 == 1 ? cout p "Marcelo\n" : cout p "Carlos\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}