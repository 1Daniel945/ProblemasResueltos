#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
using namespace std;

int n,m,k;
char mt[55][55];
int dist[55][55];
bool mark[55][55];
pair<int,int>x1,x2;
int di[]={-1,0,1,0};
int dj[]={0,1,0,-1};

void bfs(){
    queue<pair<int,int>>q;
    //Posicion de inicio
    q.push({x1.first,x1.second});
    while(!q.empty()){
        pair<int,int>a;
        a=q.front();
        q.pop();
        fr(k,0,4){
            //Moverse en el mundo
            int pi=a.first+di[k];
            int pj=a.second+dj[k];
            if(pi>=0 && pi<n && pj>=0 && pj<m){
                if((mt[pi][pj]!='x'&&mt[pi][pj]=='.')&&mark[pi][pj]!=1){
                    dist[pi][pj]=dist[a.first][a.second]+1;
                    mark[pi][pj]=1;
                    mt[pi][pj]='x';
                    q.push({pi,pj});
                }
                if((mt[pi][pj]!='x'&&mt[pi][pj]=='#')&&mark[pi][pj]!=1){
                    dist[pi][pj]=dist[a.first][a.second]+2;
                    mark[pi][pj]=1;
                    mt[pi][pj]='x';
                    q.push({pi,pj});
                }
                if((mt[pi][pj]!='x'&&mt[pi][pj]=='P')&&mark[pi][pj]!=1){
                    dist[pi][pj]=dist[a.first][a.second]+1;
                    mark[pi][pj]=1;
                    mt[pi][pj]='x';
                    q.push({pi,pj});
                }
            }
        }
    }
}

int main(){
    fastio()
    //n*m dimension del mundo
    //k costo de teletransportarse
    cin in n in m in k;
    fr(i,0,n){
        fr(j,0,m){
            cin in mt[i][j];
            //almacenar la posicion donde esta peach
            if(mt[i][j]=='P'){
                x2.first=i;
                x2.second=j;
            }
            //almacenar la posicion donde esta mario
            if(mt[i][j]=='M')x1.first=i,x1.second=j; 
        }
    }
    bfs();
    cout p dist[x2.first][x2.second]-1 p "\n";
    return 0;
}