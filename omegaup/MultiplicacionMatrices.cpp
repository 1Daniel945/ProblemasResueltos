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

//DHASIA WEZKA QUEEN

int main(){
    fastio()
    int a, b, c;
    cin in a in b in c;
    int mt[a][b];
    int mt1[b][c];
    int mt2[a][c];
    memset(mt2, 0, sizeof(mt2));
    fr(i, 0, a){
        fr(j, 0, b){
            cin in mt[i][j];
        }
    }
    fr(i, 0, b){
        fr(j, 0, c){
            cin in mt1[i][j];
        }
    }
    fr(i, 0, a){
        fr(j, 0, b){
            fr(k, 0, c){
                mt2[i][k] += mt[i][j] * mt1[j][k]; 
            } 
        }
    }
    fr(i, 0, a){
        fr(j, 0, c){
            cout p mt2[i][j] p " ";
        }
        cout p "\n";
    }
    return 0;
}








