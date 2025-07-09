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
    int n, a, b;
    cin in n in a in b;
    if(n == 1){
        cout p 1 p "\n";
    }
    else if(b < 0){
        int x = b % n;
        x += a;
        if(n + x <= n) cout p n + x p "\n";
        else cout p x p "\n";
    }
    else if(b == 0){
        cout p a p "\n";
    }
    else{
        if(a + b < n){
            cout p a + b p "\n";
        }
        else{
            int x = b % n;
            x += a;
            if(x > n){
                cout p x % n p "\n";
            }
            else cout p x p "\n";
        }
    }
    return 0;
}