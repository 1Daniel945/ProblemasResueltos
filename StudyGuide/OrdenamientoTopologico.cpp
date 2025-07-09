#include <bits/stdc++.h>
#include <queue>  
using namespace std;

const int MAXN = 1e5 + 5;

vector<int> ad[MAXN];
vector<int> grados, ord;
int n, m;

void toposort(){
	//crear queue
	queue<int> q;
	//poblar la queue con todos los nodos que tienen grado 0
	for(int i = 1; i <= n; ++i){
		if(grados[i] == 0){
			q.push(i);
		}
	}
	//bfs para procesar el grafo
	while(!q.empty()){
		int x = q.front();
		q.pop();
		//insertar el nodo x en el vector de ordenamiento
		ord.push_back(x);
		//revisamos todos los adyacentes
		for(int i = 0; i < ad[x].size(); ++i){
			int ady = ad[x][i];	
			grados[ady] -= 1; // le quitamos uno al grado del adyacente
			
			if(grados[ady] == 0){ // si el grado del adyacente se vuelve 0 insertarlo en la queue
				q.push(ady);
			}
		}
	}
	// imprimir -1 si no hay un ordenamiento topologico
	if(ord.size() < n){
		cout << "-1\n";
	}
	else{
		//imprimir vector
		for(int i = 0; i < ord.size(); ++i){
			cout << ord[i] << " ";
		}
		cout << "\n";
	}
	return;
}


int main() {
	cin>>n>>m;
	grados.resize(n + 1);
	for(int i = 0; i < m; i++){
		int u, v;
		cin>>u>>v;
		// u -> v
		grados[v] += 1;
		ad[u].push_back(v);
	}
	toposort();
}
