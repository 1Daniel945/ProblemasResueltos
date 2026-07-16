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
#define out(i, n) (i == (int) n - 1 ? "" : "\n")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

struct c {
    int x;
    int y;
};

void solve() {
    int n;
    vector<int>v = {
        1, 2, 2, 2, 4, 4, 4, 4, 6, 6, 6, 6,
        8, 8, 8, 8, 10, 10, 10, 10, 12, 12, 12, 12,
        14, 14, 14, 14, 16, 16, 16, 16, 18, 18, 18, 
        18, 20, 20, 20, 20, 22, 22, 22, 22, 24, 24, 
        24, 24, 26, 26, 26, 26, 28, 28, 28, 28, 30, 
        30, 30, 30, 32, 32, 32, 32, 34, 34, 34, 34, 
        36, 36, 36, 36, 38, 38, 38, 38, 40, 40, 40, 
        40, 42, 42, 42, 42, 44, 44, 44, 44, 46, 46, 
        46, 46, 48, 48, 48, 48, 50, 50, 50, 50
    };
    while (cin in n, n != 0) {
        cout p "Printing order for " p n p " pages:\n";
        c a;
        a.y = 1;
        int md = 0, x = 1;
        md = v[n - 1];
        a.x = md * 2;
        fr(i, 0, md) {
            if(i % 2 == 0) {
                cout p "Sheet " p x p ", front: ";
                if(a.x > n) cout p "Blank, ";
                else cout p a.x p ", ";
                cout p a.y p "\n";
            }
            else {
                cout p "Sheet " p x p ", back : ";
                cout p a.y p ", ";
                if(a.x > n) cout p "Blank\n";
                else cout p a.x p "\n";
                x++;
            }
            a.y++;
            a.x--;
        }
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}