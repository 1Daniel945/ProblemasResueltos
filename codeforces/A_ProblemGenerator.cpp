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
    int t, n, m; cin in t;
    string s;
    while(t--){
        cin in n in m in s;
        int x = 0;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
        a = count(s.begin(), s.end(), 'A');
        b = count(s.begin(), s.end(), 'B');
        c = count(s.begin(), s.end(), 'C');
        d = count(s.begin(), s.end(), 'D');
        e = count(s.begin(), s.end(), 'E');
        f = count(s.begin(), s.end(), 'F');
        g = count(s.begin(), s.end(), 'G');
        if(a < m) x += abs(m - a);
        if(b < m) x += abs(m - b);
        if(c < m) x += abs(m - c);
        if(d < m) x += abs(m - d);
        if(e < m) x += abs(m - e);
        if(f < m) x += abs(m - f);
        if(g < m) x += abs(m - g);
        cout p x p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}