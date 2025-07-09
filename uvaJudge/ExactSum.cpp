#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int n, m;
    while(cin in n){
        vector<int>a(n);
        fr(i, 0, n)cin in a[i];
        cin in m;
        int mn = 1000001, b, c;
        fr(i, 0, n){
            fr(j, 0, n){
                if(i != j && a[i] + a[j] == m){
                    int mx = max(a[i], a[j]);
                    int mn1= min(a[i], a[j]);
                    if(mx - mn1 < mn){
                        mn = mx - mn1;
                        b = mn1, c = mx;
                    }
                }
            }
        }
        cout p "Peter should buy books whose prices are " p b p " and " p c p ".\n\n";
    }
    return 0;
}