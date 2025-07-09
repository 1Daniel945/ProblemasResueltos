//Back Edge la dfs se regresa a una ancestro
//Tree Edge 
//Forward Efge no existe en grafos no dirigidos 
//Cross-Edge arista que no es back ni forward no existen en grafos no dirigidos
//Puente si se elimina el nodo el grafo ya no esta conectado cualquiera de los desendientes de u no tiene back edge
#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
typedef long long ll;
using namespace std;

int tim = 1, bridges;
const int INF = 1e9;
vector<int>tin(1e5), low(1e5, INF), vis(1e5);

void dfs(int u, int pp, vector<int>&adj){
    tin[u] = tim++;
    vis[u] = 1;
    for(auto v : adj){
        if(pp != v){
            if(!vis[u]){
                dfs(u, v, adj);
                low[u] = min(low[u], low[v]);
                if(low[v] > tin[u]){
                    bridges++;
                }
            }
            else{
                low[u] = min(low[u], tin[0]);
            }
        }
    }
    if(pp == 1){
        if(adj.rezise() > 1){
            //es un punto de articulacion
        }
    }
}

void solve(){
    int n, m; 
    cin in n in m;
    vector<int>adj(n + 1);
    dfs(0, 0, adj);
    
}

int main(){

    return 0;
}

