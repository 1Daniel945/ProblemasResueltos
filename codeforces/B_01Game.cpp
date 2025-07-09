#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb push_back
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ull lim = (ull) 2e64;

void solve(){
    int t; cin in t;
    string s;
    while (t--){
        cin in s;
        int x = 0, c = 0;
        while(true){
            if(s.empty() || s.size() == 1) break;
            if(x + 1 < (int) s.size()){
                if(s[x] != s[x + 1]){
                    s.erase(x, 2);
                    x = 0;
                    c++;
                }
                else x++;
            }
            else break;
        }
        c % 2 == 1 && c != 0 ? cout p "DA\n" : cout p "NET\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}