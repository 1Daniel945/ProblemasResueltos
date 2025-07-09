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

void solve(){
    int t, n; 
    cin in t;
    while(t--){
        cin in n;
        int h2 = 0, h1 = 0, h3 = 0;
        if(n % 2 == 0){
            h1 = ceil((double) n / 3);
            h2 = h1 + 1;
        }
        else{
            h1 = round((double) n / 3);
            h2 = ceil((double) abs(n - h1) / 2) + 1;
        }
        h3 = n - h1 - h2;
        cout p h1 p " " p h2 p " " p h3 p "\n"; 
    }    
}

int main(){
    fastio
    solve();
    return 0;
}