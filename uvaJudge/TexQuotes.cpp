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
    string s;
    bool b = 0;
    while(getline(cin, s)){
        fr(i, 0, s.size()){
            if(s[i] == '"' && b == 0){
                cout p "``";
                b = 1;
            }
            else if(s[i] == '"' && b == 1){
                cout p "''";
                b = 0;
            }
            else cout p s[i];
        }
        cout p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  