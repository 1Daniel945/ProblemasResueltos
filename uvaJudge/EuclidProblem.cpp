#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll a,b;

ll x,y;
ll euclidean_exented(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = euclidean_exented(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main() {
    while(cin>>a>>b){
        ll e = euclidean_exented(a,b,x,y);
        cout<<x<<" "<<y<<" "<<e<<"\n";
    }
    return 0;
}