#include <bits/stdc++.h>
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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, x = 0; cin in t;
    string s, s1 = "aa";
    map<string, int>mp;
    fr(i, 0, 26){
        fr(j, 0, 26){
            if(i != j){
                s1[0] = 'a' + i;
                s1[1] = 'a' + j;
                mp[s1] = x;
                x++;
            }
        }
    }
    while(t--){
        cin in s;
        cout p mp[s] + 1 p "\n";
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}