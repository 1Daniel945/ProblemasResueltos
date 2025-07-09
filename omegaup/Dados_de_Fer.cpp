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

int a[6];
int n, m;

vector<string>vs;

void dice(int ps){
    if(ps == m){
        string s = "";
        fr(i, 0, m){
            s += a[i] + '0';
        }
        vs.push_back(s);
        return;
    }
    fr(i, 1, n + 1){
        a[ps] = i;
        dice(ps + 1);
    }
}

void solve(){
    cin in n in m;
    dice(0);
    fr(i, 0, vs.size()){
        cout p vs[i] p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}