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
    int t,n;cin in t;
    while (t--){
        cin in n;
        vector<int>x(n);
        fr(i,0,n)x.push_back(i+1);
        sort(x.begin(),x.end(),greater<int>());
        fr(i,0,x.size()-1){
            if(x[i]==i+1)swap(x[i],x[i+1]);
        }
        cout p x[0];
        fr(i,1,x.size()){
            cout p " " p x[i];
        }
        cout p "\n";
    }
    return 0;
}