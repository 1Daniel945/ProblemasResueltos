#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

void solve(){
    int r, c;
    cin in r in c;
    char mt[r][c];
    fr(i, 0, r){
        fr(j, 0, c){
            cin in mt[i][j];
        }
    }
    vector<pair<int, int>>vp;
    int x = 0;
    //Horizontal
    fr(i, 0, r){
        bool isT = 0;
        int ct = 0;
        fr(j, 0, c){
            if(mt[i][j] == 'S'){
                isT = 1;
                break;
            }
            ct++;
            vp.push_back({i, j});
        }
        if(isT == 0){ 
            x += c;
            fr(j, 0, vp.size()){
                mt[vp[j].first][vp[j].second] = 'X';
            }
        }
        vp.clear();
    }
    fr(j, 0, c){
        bool isT = 0;
        int ct = 0;
        fr(i, 0, r){
            if(mt[i][j] == 'S'){
                isT = 1;
                break;
            }
            else if(mt[i][j] != 'X') ct++;
        }
        if(isT == 0) x += ct;
    }
    cout p x p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}