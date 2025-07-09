#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

const int INF = 1e9;
//Complejidad (n ^ 3) se utiliza cuando se quieren construir todos los camino

int main(){
    fast_io
    int n, m; cin in n in m;
    vector<vector<int>>adj(n + 1, vector<int>(n + 1, INF));
    fr(i, 1, m + 1){
        int u, v, w;
        cin in u in v in w;
        adj[u][v] = adj[v][u] = w;
    }
    fr(i, 1, n + 1) adj[i][i] = 0;
    fr(i, 1, n + 1){//Nodo conexion
        fr(j, 1, n + 1){//Nodo origen
            fr(k, 1, n + 1){//Nodo destino
                adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]); 
            }
        }
    }
    return 0;
}