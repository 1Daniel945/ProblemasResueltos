#include <bits/stdc++.h>
#define fr(i, x, n)for(ll i = x; i< (ll) n; ++i)
#define fi(i, x, n)for(int i = x; i >= 1; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define mps(a, b, x) map<a, b>x;
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int n; cin in n;
    v(x, int);
    fi(i, n, 1){
        if(i % 2 == 1){
            x.push_back(i);
        }
    }
    fi(i, n, 1){
        if(i % 2 == 0){
            x.push_back(i);
        }
    }
    bool b = 0;
    fr(i, 0, n - 1){
        if(abs(x[i] - x[i + 1]) == 1){
            b = 1;
            break;
        }
    }
    if(b){
        cout p "NO SOLUTION\n";
    }
    else{
        fr(i, 0, n){
            if(i < n - 1) cout p x[i] p " ";
            else cout p x[i] p "\n";
        }
    }
    return 0;
}