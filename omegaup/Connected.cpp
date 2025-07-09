#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
bool mark[100005];
vector<vector<int>> adj;
bool t=0;
int x, y;
 
void dfs(int nodo) {
    mark[nodo] = 1;
    fr(i, 0, adj[nodo].size()){
        if (! mark[adj[nodo][i]]) {
            if(adj[nodo][i] == y - 1 || adj[nodo][i] == x - 1){
                t = 1;
                return;
            }
            dfs(adj[nodo][i]);
        }
    }
}
 
int main(){
    fastio
    int n, m;
    cin in n in m;
    adj.resize(n);
    fr(i, 0, m){
        int v, u;
        cin in v in u;
        adj[v - 1].push_back(u - 1);
        adj[u - 1].push_back(v - 1);
    }
    cin in x in y;
    dfs(x - 1);
    if(t == 1)cout p "YES\n";
    else cout p "NO\n";
    return 0;
}