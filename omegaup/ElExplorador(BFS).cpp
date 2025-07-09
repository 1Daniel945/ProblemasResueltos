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

int n,m;
int mt[55][55];
int dist[55][55];
bool mark[55][55];
pair<int,int>x1,x2;
int di[]={-1,0,1,0};
int dj[]={0,1,0,-1};

void bfs(){
    queue<pair<int,int>>q;
    q.push({x1.first,x1.second});
    while(!q.empty()){
        pair<int,int>a;
        a=q.front();
        q.pop();
        fr(k,0,4){
            int pi=a.first+di[k];
            int pj=a.second+dj[k];
            //Check if not getout of the border 
            if(pi && pi<n && pj && pj<m){
                if(mt[pi][pj]!=1&&mark[pi][pj]!=1){
                    dist[pi][pj]=dist[a.first][a.second]+1;
                    mark[pi][pj]=1;
                    mt[pi][pj]=1;
                    q.push({pi,pj});
                }
            }
        }
    }
}

int main(){
    fastio()
    cin in n in m;
    //leer donde empiezo
    cin in x1.first in x1.second;
    //Puntos para saber donde termino
    int px=-1,py=-1;
    fr(i,0,n){
        fr(j,0,m){
            cin in mt[i][j];
            if(mt[i][j]==1)px=i,py=j;
        }
    }
    if(px>=0&&py>=0){
        //Donde termino
        x2.first=px,x2.second=py;
        bfs();
        cout p mt[x2.first][x2.second]+1 p "\n";
    }
    else cout p "-1\n";
    return 0;
}