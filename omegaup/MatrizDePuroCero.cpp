#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
#define p <<
#define in >>
#define fr(i,a,b) for(int i=a; i<(int)b; ++i) 
typedef long long ll;
using namespace std;
 
int main() {
    fastio()
    int n,m;cin in n in m;
    int mt[n][m];
    int mtc[n][m];
    fr(i,0,n){
        fr(j,0,m){
            cin in mt[i][j];
            mtc[i][j] = mt[i][j];
        }
    }
    //Buscar ps donde hay ceros
    vector<pair<int,int>>ps;
    fr(i,0,n){
        fr(j,0,m){
            if(mt[i][j]==0){
                ps.push_back({i,j});
            }
        }
    }
    while(!ps.empty()){
        fr(i,0,m)mtc[ps[0].first][i]=0;
        fr(i,0,n)mtc[i][ps[0].second]=0;
        ps.erase(ps.begin());
    }
    fr(i,0,n){
        fr(j,0,m){
            if(j<m-1)cout p mtc[i][j] p " ";
            else cout p mtc[i][j];
        }
        cout p "\n";
    }
    return 0;
}