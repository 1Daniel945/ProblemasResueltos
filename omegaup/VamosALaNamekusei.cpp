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
vector<int>vt;
bool mark[10];
int n;

void r(int nodo){
    //Marcar el nodo para no volver a recorrerlo
    mark[nodo] = 1;
    //Hacer recorrido de nodo no visitado
    fr(i,0,adj[n].size()){
        if(find(vt.begin(),vt.end(),adj[n][i])==vt.end()){
            vt.push_back(adj[n][i]);
        }
    }
}

int main(){
    fastio()
    int m;
    cin in m;
    adj.resize(10);
    fr(i,0,m){
        int u,v;
        cin in u in v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin in n;
    r(n);
    sort(vt.begin(),vt.end());
    fr(i,0,vt.size())cout p vt[i] p " ";
    cout p "\n";
    return 0;
}
