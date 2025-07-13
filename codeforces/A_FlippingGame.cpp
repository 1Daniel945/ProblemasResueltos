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
    int n, a; cin in n;
    string s = "", s1;
    fr(i, 0, n){
        cin in a;
        s += a + '0';
    }
    int mx = 0;
    fr(i, 0, n){
        fr(j, 0, n){
            s1 = s;
            fr(k, i, j + 1){
                s1[k] == '1' ? s1[k] = '0' : s1[k] = '1';
            }
            if(s1 != s){
                int x = count(s1.begin(), s1.end(), '1');
                mx = max(mx, x);
            }
        }
    }
    cout p mx p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}  