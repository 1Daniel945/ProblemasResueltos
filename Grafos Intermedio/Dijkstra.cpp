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

void solve(){
    int n, m;
    const int INF = 1e9;
    cin in n in m;
    vector<vector<pair<int, int>>>adj(n + 1);
    fr(i, 0, m){
        int u, v, w;
        cin in u in v in w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    set<pair<int, int>>st;
    st.insert({0, 1});
    vector<int>dist(n + 1, INF);
    dist[1] = 0;
    while(!st.empty()){
        pair<int, int>elements = *st.begin();
        st.erase(st.begin());
        /*if(dist[elements.second] != elements.first){
            continue;
        }*/
        for(auto [peso , nodo] : adj[elements.second]){
            if(dist[nodo] > dist[elements.second] + peso){
                dist[nodo] = dist[elements.second] + peso;
                st.insert({dist[nodo], nodo});
            }
        }
    }
    for(auto e : st){
        cout p e.second p "\n";    
    }
}

int main(){
    fastio;
    solve();
    return 0;
}