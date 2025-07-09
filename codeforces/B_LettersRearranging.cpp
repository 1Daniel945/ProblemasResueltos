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
    int t; cin in t;
    string s, s1;
    while(t--){
        cin in s;
        s1 = s;
        reverse(s1.begin(), s1.end());
        if(count(s.begin(), s.end(), s.at(0)) == (int)s.size() || ((int) s.size() <= 2 && s == s1)){
            cout p "-1\n";
        }
        else{
            if(s != s1) cout p s p "\n";
            else{
                fr(i, 0, s.size() - 1){
                    if(s.at(i) != s.at(i + 1)){
                        swap(s.at(i), s.at(i + 1));
                        break;
                    }
                }
                cout p s p "\n";
            }
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}