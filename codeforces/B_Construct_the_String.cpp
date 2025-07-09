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
    int t, n, a, b; cin in t;
    string s;
    while(t--){
        cin in n in a in b;
        s = "";
        char c = 'a';
        //Base case
        if(b == 1) fr(i, 0, n) s += c;
        else{
            vector<char>lt;
            fr(i, 0, min(26, b)) lt.push_back(c), c += 1;
            int x = 0, y = b;
            fr(i, 0, n){
                s += lt[x];
                if(x + 1 < b) x++;
                else x = 0;
            }
        }
        cout p s p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}