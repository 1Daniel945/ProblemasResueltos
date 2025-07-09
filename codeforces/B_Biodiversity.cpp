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
    fastio()
    int t;
    cin in t;
    string s,s1="";
    map<string, int>mp;
    int mx = 0;
    while(t--){
        cin in s;
        mp[s]++;
        mx = max(mx, mp[s]);
    }
    fp(string, int, pp, mp){
        if(pp.second == mx){
            s1 = pp.first;
            break;
        }
    }
    int sm = 0;
    fp(string, int, pp, mp){
        if(pp.first != s1){
            sm += pp.second;
        }
    }
    if(mx > sm)cout p s1 p "\n";
    else cout p "NONE\n";
    return 0;
}