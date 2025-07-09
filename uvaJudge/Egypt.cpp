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

void solve(){
    vector<int>a(3);
    while(cin in a[0] in a[1] in a[2]){
        if(count(a.begin(), a.end(), 0) == 3) break;
        sort(a.begin(), a.end());
        if(pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2)){
            cout p "right\n";
        }
        else cout p "wrong\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}
