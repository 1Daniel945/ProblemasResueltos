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

int main() {
    fastio()
    int t,n,e;cin in t;
    while (t--){
        cin in n;
        map<int,int>mp,mp1;
        fr(i,0,n){
            cin in e;
            mp[e]++;
            if(mp1[e]==0)mp1[e]=i+1;
        }
        bool ex=0;
        fp(int,int,pp,mp){
            if(pp.second==1){
                cout p mp1[pp.first] p "\n";
                ex=1;
                break;
            }
        }
        if(ex==0)cout p "-1\n";
    }
    return 0;
}