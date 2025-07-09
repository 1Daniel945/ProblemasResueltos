#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    int t,n;cin in t;
    while (t--){
        cin in n;
        int v = n*567;
        v/=9;
        v+=7492;
        v*=235;
        v/=47;
        v-=498;
        string s = to_string(v);
        cout p s[s.size()-2] p "\n";
    }
    return 0;
}
