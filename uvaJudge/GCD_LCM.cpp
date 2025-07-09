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

int gcd1(int a, int b){
    return b ? gcd1(b , a % b) : a;
}

int lcm1(int a, int b){
    return a / gcd1(a, b) * b;
}

void solve(){
    int t, a, b; cin in t;
    while(t--){
        cin in a in b;
        if(gcd1(a, b) == a && lcm1(a, b) == b){
            cout p gcd1(a, b) p " " p lcm1(a, b) p "\n"; 
        }
        else cout p "-1\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}