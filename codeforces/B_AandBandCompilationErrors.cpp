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
    int n,c;
    map<int,int>mp,mp1,mp2;
    cin in n;
    fr(i,0,n){
        cin in c;
        mp[c]++;
    }
    fr(i,0,n-1){
        cin in c;
        mp1[c]++;
    }
    fp(int,int,pp,mp){
        if(pp.second>0){
            if(mp1[pp.first]<mp[pp.first])cout p pp.first p "\n";
        }
    }
    fr(i,0,n-2){
        cin in c;
        mp2[c]++;
    }
    fp(int,int,pp,mp1){
        if(pp.second>0){
            if(mp2[pp.first]<mp1[pp.first])cout p pp.first p "\n";
        }
    }
    return 0;
}