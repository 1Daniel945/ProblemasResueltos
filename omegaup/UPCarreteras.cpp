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

vector<vector<int>>adj;

int main(){
    fastio()
    int n; cin in n;
    adj.resize(n + 1);
    fr(i, 0, n){
        int a, b;
        cin in a in b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int m; cin in m;
    fr(i, 0, m){
        int a, b;
        cin in a in b;
        //find if a connection exists between a and b
        if(find(adj[a].begin(), adj[a].end(), b) != adj[a].end()){
            cout p "YES\n";
        }
        else cout p "NO\n";
    }
    return 0;
}