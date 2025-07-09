#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
using namespace std;

struct stru{
    int x, y, steps;
};

const int MAXN = 1000;

int dis[MAXN][MAXN];

int n=6, m=7;

int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};

bool valid(int x, int y){
    if(x >= 0 && x < n && y>= 0 && y <m && dis[x][y]==-1){
        return true;
    }
    else return false;
}

void bfs(int x, int y){
    //Declarar queue
    queue<stru>q;
    //insertar la fuente de inicio
    q.push({x, y, 0});
    dis[x][y] = 0;
    //Procesar cada nodo hasta que no quede ninguno
    while(!q.empty()){
        stru actual = q.front();
        q.pop();
        //Expandirse hacia las 4 adyacencias
        fr(i,0,4){
            int aux_x = actual.x + dx[i];
            int aux_y = actual.y + dy[i];
            //Revisar que sigo dentro del grid, revisar que no se haya visitado
            if(valid(aux_x, aux_y)){
                //insertar en la queue
                q.push({aux_x,aux_y,actual.steps+1});
                //agregar la distancia
                dis[aux_x][aux_y]=actual.steps+1;
            }
        }
    }
}

int main(){
    memset(dis, -1, sizeof(dis));
    bfs(1, 0);
    fr(i,0,n){
        fr(j,0,m){
            cout p dis[i][j] p " ";
        }
        cout p "\n";
    }
    return 0;
}