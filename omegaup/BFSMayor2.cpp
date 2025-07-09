#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

vector<vector<int>>adj;
vector<bool>vis;

void bfs(int node){
    queue<int>q;
    q.push(node);
    vis[node] = 1;
    cout p node p " ";
    while(!q.empty()){
        int nodoProcesar = q.front();
        q.pop();
        sort(adj[nodoProcesar].begin(), adj[nodoProcesar].end(), greater<int>());
        fr(i, 0, adj[nodoProcesar].size()){
            int nodo = adj[nodoProcesar][i];
            if(!vis[nodo]){
                cout p nodo p " ";
                vis[nodo]=1;
                q.push(nodo);
            }
        }
    }
}

void solve(){
    int n, m, x;
    cin in n in m in x;
    adj.resize(n + 1);
    vis.resize(n + 1, 0);
    fr(i, 0, m){
        int u, v;
        cin in u in v;
        adj[u].push_back(v);
    }
    bfs(x);
}

int main(){
    fastio
    solve();
    return 0;
}