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
    while(t--){
        cin in n;
        vector<int>a(n);
        string s = "";
        char c = 'a';
        vector<char>vc(n);
        map<char, int>mp;
        fr(i, 0, n) {
            cin in a[i];
            if(a[i] == 0){
                vc[i] = c;
                mp[c] = 1;
                c++;
                if(c > 'z') c = 'a';
            }
            else{
                fr(j, 0, 26){
                    if(mp[j + 'a'] == a[i]){
                        mp['a' + j]++;
                        vc[i] = j + 'a';
                        break;
                    }
                }
            }
        }
        for(auto e : vc) cout p e;
        cout p "\n";
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}