#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
    fastio
    double x;
    vector<double>vd;
    while(cin in x){
        vd.push_back(x);
        sort(vd.begin(), vd.end());
        int x = vd.size();
        if(x % 2 == 1){
            ll x1 = floor(vd[x / 2]);
            cout p x1 p "\n";
        }
        else{
            x /= 2;
            ll x1 = vd[floor(x) - 1] + vd[floor(x)];
            x1 = floor(x1 / 2);
            cout p x1 p "\n";
        }
    }
    return 0;
}

