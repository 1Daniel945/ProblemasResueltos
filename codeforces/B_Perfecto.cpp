#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    while(t--){
        int n; cin in n;
        vector<int>a;
        fr(i, 0, n) a.push_back(i + 1);
        fr(i, 0, n - 1){
            if(i % 2 == 0) swap(a[i], a[i + 1]);
        }
        ll x = 0;
        bool f = 0;
        fr(i, 0, n){
            x += a[i];
            if(sqrt((double)x) - floor(sqrt((double)x)) == 0){
                if(i < n - 1){
                    x -= a[i];
                    swap(a[i], a[i + 1]);
                    x += a[i];
                }
                else {
                    f = 1;
                    break;
                }
            }
        }
        if(f == 1) cout p "-1\n";
        else{
            fr(i, 0, n) cout p a[i] p " ";
            cout p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}