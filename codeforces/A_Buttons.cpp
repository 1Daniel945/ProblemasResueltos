#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    int t;cin in t;
    while (t--){
        int a[3];
        int s=0;
        fr(i,0,3){
            cin in a[i];
            s+=a[i];
        }
        int pr=0,im=0;
        if(s%2==0){
            pr=(s/2)+a[1];
            im=s/2+a[0];
        }
        else{
            pr=(s/2)+a[1];
            im=(s/2)+1+a[0];
        }
        im>pr?cout p "First\n":cout p "Second\n";
    }
    return 0;
}
