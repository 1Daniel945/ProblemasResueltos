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
    int t; cin in t;
    while(t--){
        char a[8][8];
        fr(i, 0, 8){
            fr(j, 0, 8){
                cin in a[i][j];
            }
        }
        char last = '$';
        //Check horizontal
        fr(i, 0, 8){
            string s = "";
            fr(j, 0, 8){
                s += a[i][j];
            }
            int x = count(s.begin(), s.end(), 'R');
            if(x == 8) last = 'R';
        }
        if(last == 'R') cout p "R\n";
        else cout p "B\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}