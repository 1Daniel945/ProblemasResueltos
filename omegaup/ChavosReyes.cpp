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

//formula para calcular sumas ((n *(n + 1))/2) p "\n";
//formula para calcular suma de n hasta m ((n + m) * (m - n + 1) / 2)

int main(){
    fastio
    int n, q, k;
    cin in n in q in k;
    pair<int, int>pi;
    fr(i, 0, q){
        cin in pi.first in pi.second;
        int s = ((pi.first + pi.second) * (pi.second - pi.first + 1) / 2);
        if(s > k)cout p "Chavos :)\n";
        else if(s == k)cout p "Tablas\n";
        else cout p "Rey :(\n";
    }
    return 0;
}