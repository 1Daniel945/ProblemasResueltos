#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int n;cin in n;
    int mt[n][n];
    fr(i,0,n){
        fr(j,0,n){
            cin in mt[i][j];
        }
    }
    fr(j,0,n){
        fi(i,n,0){
            cout p mt[i][j] p " ";
        }
        cout p "\n";
    }
    return 0;
}