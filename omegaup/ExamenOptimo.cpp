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
    int t; cin in t;
    vector<pair<int, int>>vp;
    while(t--){
        int a, b;
        cin in a in b;
        vp.push_back({a, b});
    }
    int points = 0, ctMin = 0, mx = 0;
    fr(i, 0, vp.size()){
        if(vp[i].first == 180){
            mx = max(mx, vp[i].second);
        }
        else if((ctMin + vp[i].first) <= 180){
            ctMin += vp[i].first;
            points += vp[i].second;
            mx = max(mx, points);
        }
        else{
            if(vp[i].first <= 180){
                points = vp[i].second;
            }
            mx = max(mx, points);
            ctMin = 0, points = 0;
        }
    }
    cout p mx p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}