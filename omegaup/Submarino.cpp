#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

vector<vector<int>>lista;
vector<bool>vis;

int out,ct=0,mf=0;

void bfs(int nodo_inicio){
    queue<int>q;
    q.push(nodo_inicio);
    vis[nodo_inicio]=1;
    while(!q.empty()){
        int nodo_a_procesar=q.front();
        q.pop();
        fr(i,0,lista[nodo_a_procesar].size()){
            int nodo=lista[nodo_a_procesar][i];
            if(!vis[nodo]){
                if(out){
                    out--;
                    ct++;
                }
                vis[nodo]=1;
                q.push(nodo);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,x;
    cin in n in a in x;
    lista.resize(n);
    vis.resize(n,0);
    fr(i,0,a){
        int u,v;
        cin in u in v;
        lista[u-1].push_back(v-1);
        lista[v-1].push_back(u-1);
    }
    out = x;
    bfs(n-1);
    cout p ct p "\n";
    return 0;
}