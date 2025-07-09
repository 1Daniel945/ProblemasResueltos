#include <bits/stdc++.h>
#define fr(i, x, n)for(ll i = x; i< (ll) n; ++i)
#define fi(i, x, n)for(int i = x - 1; i >= n; --i)
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
    ll s1 = 0, s2 = 0;
    vector<ll>a(n), v, v1;
    fr(i, 0, n){
        a[i] = i + 1;
    }
    int mt2;
    mt2 = n / 2;
    if(n == 3) mt2 += 1;
    fi(i, n, 0){
        if(s1 == 0){
            s1 += a[i];
            v.push_back(a[i]);
            continue;
        }
        if(s1 > 0 && s2 == 0){
            s2 += a[i];
            v1.push_back(a[i]);
            mt2--;
            continue;
        }
        if(mt2 > 0 && s2 <= s1){
            s2 += a[i];
            v1.push_back(a[i]);
            mt2--;
        }
        else{
            s1 += a[i];
            v.push_back(a[i]);
        }
    }
    if(s1 == s2){
        cout p "YES\n";
        cout p v.size() p "\n";
        fi(i, v.size(), 0){
            cout p v[i] p " ";
        }
        cout p "\n";
        cout p v1.size() p "\n";
        fi(i, v1.size(), 0){
            cout p v1[i] p " "; 
        }
        cout p "\n";
    }
    else cout p "NO\n";
    return 0;
}
