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

void solve(){
    int t, n; cin in t;
    string s;
    while(t--){
        cin in n in s;
        int mn = 1;
        int mx = n, x = 1;
        vector<int>a(n);
        fi(i, n - 1, 0){
            if(s[i] == '>'){
                a[n - x] = mx;
                mx--;
            }
            else if(s[i] == '<'){
                a[n - x] = mn;
                mn++;
            }
            x++;
        }
        cout p (mx > 0 ? mx : mn) p " ";
        fr(i, 0, n - 1) cout p a[i] p out(i, n - 1);
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  