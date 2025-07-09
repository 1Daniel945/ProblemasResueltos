#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define grt greater<int>()
typedef long long ll;
using namespace std;

int main(){
    fastio
    double n, m;
    cin in n in m;
    int x = (int) n;
    int y = (int) m;
    if(floor(n / m) > 0 && x % y > 0){
        cout p floor(n/m) p " " p x % y p "/" p m p "\n";
    }
    else if(x % y > 0) cout p x % y p "/" p m p "\n";
    else cout p floor(n/m) p "\n";
    return 0;
}