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
    int t, n, m; cin in t;
    string s;
    while(t--){
        cin in n;
        vector<int>a(n);
        map<int, char>mp;
        fr(i, 0, n) cin in a[i];
        cin in m;
        while(m--){
            cin in s;
            mp.clear();
            vector<bool>isAvailable(26, 0);
            bool b = 0;
            if((int) s.size() != n) cout p "NO\n";
            else {
                fr(i, 0, s.size()){
                    if(mp.count(a[i]) == 1){
                        if(s[i] != mp[a[i]]){
                            cout p "NO\n";
                            b = 1;
                            break;
                        }
                    }
                    else {
                        if(isAvailable[s[i] - 'a'] == 0){
                            mp[a[i]] = s[i];
                            isAvailable[s[i] - 'a'] = 1;
                        }
                        else if(mp.count(a[i]) == 0 && isAvailable[s[i] - 'a'] == 1){
                            cout p "NO\n";
                            b = 1;
                            break;
                        }
                    }
                }
                if(b == 0) cout p "YES\n";
            }
        }
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}