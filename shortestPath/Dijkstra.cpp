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

//Complejidad O(n + m log m)
const ll INF = LLONG_MAX;
int n;

vector<ll>parent;
vector<ll>outPath;

void path(int u){
    if(parent[u] == - 1) return;
    path(parent[u]);
    outPath.push_back(u);
}

void dijkstra(int startNode, vector<vector<pair<int, int>>>&adj){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    vector<ll>dist(n + 1, INF);
    parent.assign(n + 1, - 1);
    pq.push({0, startNode});
    dist[startNode] = 0;
    while(!pq.empty()){
        int current_node = pq.top().ss;
        int current_weight = pq.top().ff;
        pq.pop();
        if(current_weight > dist[current_node]) continue;
        for(auto &[node, weight] : adj[current_node]){
            if(dist[current_node] + weight >= dist[node]) continue;
            dist[node] = dist[current_node] + weight;
            parent[node] = current_node;
            pq.push({dist[node], node});
        }
    }
    path(n);
    if(outPath.empty()) cout p "-1\n";
    else{
        cout p 1 p " ";
        for(auto e : outPath) cout p e p " ";
        cout p "\n";
    }
}

int main(){
    fast_io
    int m;
    cin in n in m;
    vector<vector<pair<int, int>>>adj(n + 1);
    fr(i, 1, m + 1){
        int u, v, w;
        cin in u in v in w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1, adj);
    return 0;
}