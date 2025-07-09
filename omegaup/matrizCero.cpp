#include <bits/stdc++.h>
#define fi(i,x,n)for(int i=x; i<n; ++i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define v(x)vector<pair<int,int>>x;
#define psi(t,x) for(pair<string,int>t:x)
typedef long long ll;
using namespace std;

int main() {
    int n,m;cin in n in m;
    int mt[n][m];
    v(x);
    fi(i,0,n){
        fi(j,0,m){
            cin in mt[i][j];
            if(mt[i][j]==0){
                x.push_back({i,j});
            }
        }
    }
    fi(l,0,x.size()){
        fi(i,0,n){
            mt[x[l].first][i]=0;
        }
        fi(i,0,m){
            mt[i][x[l].second]=0;
        }
    }
    fi(i,0,n){
        fi(j,0,m){
            cout p mt[i][j];
        }
        cout p "\n";
    }
    return 0;
}