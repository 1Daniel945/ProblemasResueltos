#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int t, n; cin in t;
    string s;
    while(t--){
        cin in n in s;
        if(s.find("8") != string :: npos){
            int x = s.find("8");
            if(s.substr(x, s.size()).size()>=11){
                cout p "YES\n";
            }
            else cout p "NO\n";
        }
        else cout p "NO\n";
    }
    return 0;
}