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
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    string s, s1, s2;
    int n;
    cin in s in n;
    int sz = s.size(), sz1;
    while(n--){
        cin in s1;
        sz1 = s1.size();
        if(sz1 < sz) cout p "NO\n";
        else{
            bool f = 0;
            while(true){
                if(s1.empty()) break;
                sz1 = s2.size();
                s2 = s1.substr(0, sz);
                s1.erase(0, sz);
                if(sz1 > 0 && sz1 < sz){
                    f = 1;
                    break;
                }
                if(s2 != s && !s2.empty()){
                    f = 1;
                    break;
                }
            }
            f == 0 ? cout p "YES\n" : cout p "NO\n";
        }
    }
}   

int main(){
    fast_io
    solve();
    return 0;
}