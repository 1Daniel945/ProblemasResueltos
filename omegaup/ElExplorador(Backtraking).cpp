#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

const int limN=100,inf=1e9;
//Matriz para memorizar resultados ayuda en tiempo de ejecucion
int memo[limN][limN];
//Casilla para marcar el camino recorrido
int mat[limN][limN];
int mini = inf,n,m;

int a,b,A,B;

void f(int i, int j, int cp){
    //Condiciones de paro para terminar la recursion 
    if(i<0||j<0||i>=n||j>=m)return;
    if(i<0||j<0||i>=n||j>=m)return;
    if(cp>=mini)return;
    if(mat[i][j]==1)return;
    if(i==A && j==B){
        mini = min(mini,cp);
        return;
    }
    //Marcar
    mat[i][j]=1;
    //Modificar memo
    memo[i][j]=1;
    //Llamadas
    f(i-1,j,cp+1);
    f(i,j+1,cp+1);
    f(i+1,j,cp+1);
    f(i,j-1,cp+1);
    //Desmarcar
    mat[i][j]=0;
}

int main(){
    cin in n in m;
    fr(i,0,n){
        fr(j,0,m){
            cin in mat[i][j];
            //Inicializar la matriz memo
            memo[i][j]=inf;
        }
    }
    cin in a in b;
    cin in A in B;
    f(a,b,0);
    cout p mini+1 p "\n";
    return 0;
}