#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

ll mod1 = 998244353;

void solve(){
    string s; cin in s;
    if(s.find('0') != string::npos){
        s.erase(s.find('0'), 1);
    }
    else s.erase(s.size() - 1);
    cout p s p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}