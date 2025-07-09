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
int n,m;
bool mt = 0;
bool mark[105];

void dfs(int node){
    mark[node] = 1;
    fr(i, 0, adj[node].size()){
        if(adj[node][i] == n - 1){
            mt = 1;
        }
        if(!mark[adj[node][i]]){
            dfs(adj[node][i]);
        }
    }
}

int main(){
    fastio()
    cin in n in m;
    adj.resize(n);
    fr(i, 0, m){
        int a, b;
        cin in a in b;
        //make a graph unidirectional
        adj[a].push_back(b);
    }
    memset(mark, 0, sizeof(mark));
    dfs(0);
    cout p mt p "\n";
    return 0;
}