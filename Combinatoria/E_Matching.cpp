#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, x, a; cin in t;
    string s;
    while(t--){
        cin in s;
        x = 0;
        if(s.at(0) == '0') cout p "0\n";
        else if(count(s.begin(), s.end(), '?') >= 1){
            if(s.at(0) == '?') x = 9;
            else x = 1;
            fr(i, 1, s.size()){
                if(s.at(i) == '?') x *= 10;
            }
            cout p x p "\n";
        }
        else if(s.at(0) != '0') cout p "1\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}
