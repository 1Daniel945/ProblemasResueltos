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
    int t, n, k;
    cin in t;
    string s, s1;
    while (t--){
        cin in n in k in s;
        map<char, int>mp;
        int sz = (int) s.size() - k;
        if(sz == 1) cout p "YES\n";
        else{
            bool b = 0;
            fr(i, 0, s.size()){
                mp[s[i]]++;
                if(mp[s[i]] == sz){
                    b = 1;
                    break;
                }
            }
            if(b == 1) cout p "YES\n";
            else{
                int pr = 0, im = 0;
                for(auto e : mp){
                    if(e.ss >= 2 && pr < (sz - 1)){
                        pr += (e.ss / 2) * 2;
                        im += e.ss % 2;
                    }
                    else im++;
                }
                if(sz % 2 == 0 && pr >= sz) cout p "YES\n";
                else{
                    if(pr >= sz - 1) cout p "YES\n";
                    else cout p "NO\n";
                }
            }
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}