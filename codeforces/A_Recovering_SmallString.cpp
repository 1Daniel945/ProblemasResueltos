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
    int t, n; cin in t;
    string a = "abcdefghijklmnopqrstuvwxyz";
    while(t--){
        cin in n;
        string s = "";
        int x = 0;
        while(n >= 28){
            n -= 26;
            x++;
        }
        fr(i, 0, x){
            s+='z';
        }
        while(s.size() < 3){
            int v = n - (3 - s.size() - 1);
            n -= v;
            s += a[v - 1];
        }
        sort(s.begin(), s.end());
        cout p s p "\n";
    }
}   

int main(){
    fastio
    solve();
    return 0;
}