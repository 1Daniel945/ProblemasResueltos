#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    fastio(); 
    int n=0,a,b,c;
    cin in a in b in c;
    fr(i,1,a+1)if(i%2==1)n+=i;
    fr(i,1,b+1)if((i&(i-1))==0)n-=i;
    while(n%c==0)n/=c;
    cout p n p "\n";
    return 0;
}