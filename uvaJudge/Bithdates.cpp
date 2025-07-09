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
    int t, a, b, c; cin in t;
    pair<int, int>pii;
    vector<tuple<pair<int, int>, int, string>>vtp;
    string s;
    while(t--){
        cin in s in a in b in c;
        pii.first = c;
        pii.second = b;
        vtp.push_back(make_tuple(pii, a, s));    
    }
    sort(vtp.begin(), vtp.end());
    cout p get<2>(vtp[vtp.size() - 1]) p "\n";
    cout p get<2>(vtp[0]) p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}
