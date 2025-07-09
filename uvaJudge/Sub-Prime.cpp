#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int b, d;  
    while(cin in b in d, b > 0 && d> 0){
        vector<int>r (b);
        map<int, int>mp;
        fr(i, 0, b) cin in r[i], mp[i + 1] = r[i];
        //indentify bank, indentify creditor bank, valor obligaciones
        int b, c, v;
        fr(i, 0, d){
            cin in b in c in v;
            mp[c] += v;
            mp[b] -= v;
        }
        int x = 0;
        fp(int, int, pp, mp){
            if(pp.second >= 0) x++;
        }
        x == (int) mp.size() ? cout p "S\n" : cout p "N\n";
    }
    return 0;   
}