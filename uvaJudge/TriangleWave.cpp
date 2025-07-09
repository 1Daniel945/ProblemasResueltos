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
    int amplitude, frequency;
    cin in amplitude in frequency;
    while(frequency--){
        fr(i, 1, amplitude + 1){
            fr(j, 0, i){
                cout p i;
            }
            cout p "\n";
        }
        fi(i, amplitude, 0){
            fr(j, 0, i){
                cout p i;
            }
            if(i > 0) cout p "\n";
        }
        if(frequency > 0) cout p "\n";
    }
}

int main(){
    fastio
    int t; cin in t;
    while(t--){
        if(t > 0){
            solve();
            cout p "\n";
        }
        else solve();
    }
    return 0;
}