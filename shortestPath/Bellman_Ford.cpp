#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

int INF = 1e9;

//Complejidad o(n * m) calcula la distancia minima desde un punto de origen a uno de destino funciona con grafos ponderados negativos
void fun(int origen, vector<tuple<int, int, int>>&edges, int n, int m){
    vector<int>dist(n + 1, INF);
    dist[origen] = 0;
    fr(i, 0, n - 1){
        for(auto [u, v, w] : edges){
            if(dist[u] == 1e9) continue;
            dist[v] = min(dist[v], dist[u] + w); 
        } 
    }
    vector<bool>ciclo(m + 1, 0);
    fr(i, 0, n){
        for(auto [u, v, w] : edges){
            if(dist[u] == 1e9) continue;
            if(dist[v] > dist[u] + w){
                ciclo[v] = 1;
            }
        }
    }
    //Falta hacer un bfs
}

int main(){
    fast_io  
    int n, m;
    cin in n in m;
    vector<tuple<int, int, int>> edges(n + 1);
    fr(i, 1, m + 1){
        int u, v, w; cin in u in v in w;
        edges[i] = {u, v, w};
    }
    int s; cin in s;
    fun(s, edges, n, m);
    return 0; 
}