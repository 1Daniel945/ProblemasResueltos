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
    int t, n; cin in t;
    string s, s1, s2;
    while(t--){
        cin in n in s in s1;
        if(s == s1) cout p "YES\n";
        else{
            s2 = s1;
            vector<int>v, shift;
            fr(i, 0, s.size()){
                if(s1[i] != s[i]) v.pb(i);
            }
            shift = v;
            int last = shift[shift.size() - 1];
            shift.pop_back();
            s2[v[0]] = s1[last];
            v.erase(v.begin());
            fr(i, 0, v.size()){
                s2[v[i]] = s1[shift[i]];
            }
            s2 == s ? cout p "YES\n" : cout p "NO\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}