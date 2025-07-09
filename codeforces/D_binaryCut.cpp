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
    fastio();
    int n,m,a;
    cin in n in m;
    v(y,int);
    v(x,int);
    fr(i,0,m)cin in a,y.push_back(a);
    fr(i,0,n)x.push_back(i+1);
    int c=0;
    int z=0;
    while(!y.empty()){
        fr(i,0,n){
            c++;
            if(x[i]==y[0]&&!y.empty()){
                while(x[i]==y[0]&&!y.empty()){
                    y.erase(y.begin());
                }
            }
        }
    }
    cout p c p "\n";
    return 0;
}
