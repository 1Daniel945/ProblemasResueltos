
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
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    string s;
    while (t--){
        cin in s;
        if(s.size() == 1){
            if('z' != s.at(0))cout p "z" p s.at(0) p "\n";
            else cout p "a" p s.at(0) p "\n";
        }
        else{
            bool isT = 0;
            fr(i, 0, s.size() - 1){
                cout p s.at(i);
                if(s.at(i) == s.at(i + 1) && isT == 0){
                    isT = 1;
                    if(s.at(i) == 'z') cout p 'a';
                    else cout p 'z';
                }
            }
            cout p s.at(s.size() - 1);
            if(isT == 0){
                if('z' != s.at(s.size() - 1)) cout p "z\n";
                else cout p "a\n";
            }
            else cout p "\n";
        }
    }
}

int main(){
    fastio
    solve();
}