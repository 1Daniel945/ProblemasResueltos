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
    int t;cin>>t;
    double n;
    while (t--){
        cin>>n;
        int x=ceil(n/2);
        if(n>=2)cout<<x<<"\n";
        else cout<<"1\n";
    }
    return 0;
}