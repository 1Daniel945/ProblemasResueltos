#include <bits/stdc++.h>
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

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n) cin in a[i];
        map<int, bool>mp;
        int x = -1;
        fi(i, n - 1, 0){
            if(mp[a[i]] == 0){
                mp[a[i]] = 1;
            }
            else{
                x = i;
                break;
            }
        }
        if(x != -1){
            cout p x + 1 p "\n";
        }
        else cout p "0\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}