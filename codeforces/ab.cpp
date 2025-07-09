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
#define f first
#define s second
typedef long long ll;
using namespace std;

//move for make a dfs
int di[] = {-1, 0, 1, 0};
int dj[] = {0, 1, 0, -1};

int main(){
    int t,n;cin in t;
    while(t--){
        cin in n;
        int a[n];
        fr(i,0,n)cin in a[i];
        int x=0;
        string s="";
        fr(i,0,n)s+=to_string(a[i]);
        ll sm=0;
        fr(i,0,n){
            if(s.find(to_string(sm))!=string::npos)x++;
            sm+=a[i];
        }
        cout p x p "\n";
    }
    return 0;
}