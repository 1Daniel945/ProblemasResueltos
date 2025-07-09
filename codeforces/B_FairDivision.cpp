#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int t,n;cin in t;
    while (t--){
        cin in n;
        int a,one=0,two=0;
        fr(i,0,n)cin in a,a==1?one++:two++;
        two*=2;
        if(two>0&&one==0){
            two/=2;
            if(two%2==0)cout p "YES\n";
            else cout p "NO\n";
        }
        else if(one%2==0&&two%2==0)cout p "YES\n";
        else cout p "NO\n";
    }
    return 0;
}
