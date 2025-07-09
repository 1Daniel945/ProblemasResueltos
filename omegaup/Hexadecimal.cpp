#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    fastio
    int n; cin in n;
    string s = "";
    while(n > 0){
        if(n % 16 == 15) s += "F";
        else if(n % 16 == 14) s += "E";
        else if(n % 16 == 13) s += "D";
        else if(n % 16 == 12) s += "C";
        else if(n % 16 == 11) s += "B";
        else if(n % 16 == 10) s += "A";
        else if(n % 16 < 10) s += to_string(n % 16);
        n/=16;
    }
    reverse(s.begin(), s.end());
    cout p s p "\n";
    return 0;
}