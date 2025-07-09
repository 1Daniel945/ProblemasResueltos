#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    string s;
    cin in s;
    int out = 0;
    int mn = INT_MAX;
    while(true){
        reverse(s.begin(), s.end());
        fr(i, 0, s.size()){
            out += pow((s.at(i) - '0'), (i + 1));
            if(out != 0){
                mn = out;
            }
        }
        s = to_string(out);
        out = 0;
        if(s.size() == 1) break;
    }
    cout p mn p "\n";
}

int main() {
    fastio
    solve();
    return 0;
}
