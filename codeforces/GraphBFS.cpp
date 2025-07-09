#include<bits/stdc++.h>
#define fr(i,a,b)for(int i=a; i<(int)b; ++i)
#define p <<
using namespace std;

vector<vector<int>>lista;
vector<bool>vis;

void bfs(int nodo_inicio){
    queue<int>nodo_a_encolar;//creas la cola
    //Agregas el nodo con el que inicia la bfs
    nodo_a_encolar.push(nodo_inicio);
    //Marcar la primera posicion para no volver a recorrer esa ps
    vis[nodo_inicio]=1;
    //Mientras la cola no este vacia aqui comienza la bfs
    while(!nodo_a_encolar.empty()){
        //Nodo a procesar es el elemento que esta hasta arriba de la cola
        int nodo_a_procesar=nodo_a_encolar.front();
        nodo_a_encolar.pop();
        sort(lista[nodo_a_procesar].begin(),lista[nodo_a_procesar].end(),greater<int>());
        fr(i,0,lista[nodo_a_procesar].size()){
            int nodo=lista[nodo_a_procesar][i];
            if(!vis[nodo]){
                cout p nodo+1 p " ";
                vis[nodo]=1;
                nodo_a_encolar.push(nodo);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nodos,aristas,x;
    cin>>nodos>>aristas>>x;
    lista.resize(nodos);
    vis.resize(nodos,0);
    fr(i,0,aristas){
        int u,v;
        cin>>u>>v;
        lista[u-1].push_back(v-1);
        lista[v-1].push_back(u-1);
    }
    cout << x << " "; 
    bfs(x-1);
    return 0;
}