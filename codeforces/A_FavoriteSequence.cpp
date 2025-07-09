#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int t,n;cin in t;
    while (t--){
        cin in n;
        int a;
        multimap<int,int>mp;
        v(x,int);
        int mt=0;
        if(n%2==0)mt=n/2;
        else mt=(n/2)+1;
        int x1=1,x2=2*(n/2);
        fr(i,0,n){
            cin in a;
            x.push_back(a);
        }
        fr(i,0,n){
            if(mt>0){
                mp.emplace(x1,x[i]);
                x1+=2;
                mt--;
            }
            else{
                mp.emplace(x2,x[i]);
                x2-=2;
            }
        }
        fp(int,int,pp,mp){
            cout p pp.second p " ";
        }
    }
    return 0;
}
