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
    int t, n; cin in t;
    while (t--){
        cin in n;
        vector<int>a(n), b(n);
        fr(i, 0, n) cin in a[i], b[i] = a[i];
        int c = 0, c1 = 0, x, y;
        sort(a.begin(), a.end());
        while(true){
            x = *max_element(a.begin(), a.end());
            y = *min_element(a.begin(), a.end());
            if((x + y) % 2 == 0){
                break;
            }
            else a.erase(a.begin());
            c++;
        }
        sort(b.begin(), b.end(), greater<int>());
        while(true){
            x = *max_element(b.begin(), b.end());
            y = *min_element(b.begin(), b.end());
            if((x + y) % 2 == 0){
                break;
            }
            else b.erase(b.begin());
            c1++;
        }
        cout p min(c, c1) p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  