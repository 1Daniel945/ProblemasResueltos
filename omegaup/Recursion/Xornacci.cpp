#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x)for(pair<a,b>t:x)
#define mps(a,b,x)map<a,b>x;
#define vp(x)vector<pair<int, int>>x;
#define v(x,d)vector<d>x;
#define fastio()ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int a,b,n;
const int inf=1e9;
int mp[inf];

int f(int x) {
    if(mp[x]>0){ 
        return mp[x];
    }
    if(x==0){
        return a;
    }
    if(x==1){
        return b;
    }
    mp[x]=f(x-1) xor f(x-2); 
    return mp[x];
}

int main() {
    int t;scanf("%d",&t);
    while (t--) {
        scanf("%d%d%d",&a,&b,&n);
        printf("%d\n",f(n));
    }
    return 0;
}