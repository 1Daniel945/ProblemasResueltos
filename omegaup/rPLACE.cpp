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
    int r,c,n,a,b;
    cin in r in c;
    cin in n;
    char x;
    char mt[r][c];
    //llenar matriz
    fill(mt[0], mt[0] + r*c, '.');
    fr(i,0,n){
        cin in a in b in x;
        mt[a][b] = x;
    }
    fr(i,0,r){
        fr(j,0,c)cout p mt[i][j];
        cout p "\n";
    }
    return 0;
}