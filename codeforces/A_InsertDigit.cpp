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
    int t, a, b; cin in t;
    string s;
    while(t--){
        cin in a in b in s;
        s.insert(s.begin(), b + '0');
        fr(i, 0, s.size() - 1){
            if(s.at(i) - '0' <= s.at(i + 1) - '0'){
                swap(s.at(i), s.at(i + 1));
            }
            else break;
        }
        cout p s p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}