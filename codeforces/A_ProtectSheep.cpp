#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

//min_element cuando ocupe encontrar el minimo y sumarle 

int main(){
    fastio
    int n, m;
    cin in n in m;
    char mt[n][m];
    fr(i, 0, n){
        fr(j, 0, m){
            cin in mt[i][j];
        }
    }
    fr(i, 0, n){
        fr(j, 0, m){
            //Derecha
            if(j + 1 < m){
                if(mt[i][j] == 'S' && mt[i][j + 1] == '.'){
                    mt[i][j + 1] = 'D';
                }
            }
            //Izquierda
            if(j - 1 >= 0){
                if(mt[i][j] == 'S' && mt[i][j - 1] == '.'){
                    mt[i][j - 1] = 'D';
                }
            }
            //Arriba 
            if(i - 1 >= 0){
                if(mt[i][j] == 'S' && mt[i - 1][j] == '.'){
                    mt[i - 1][j] = 'D';
                }
            }
            //Abajo
            if(i + 1 < n){
                if(mt[i][j] == 'S' && mt[i + 1][j] == '.'){
                    mt[i + 1][j] = 'D';
                }
            }
        }
    }
    bool x = 0;
    fr(i, 0, n){
        fr(j, 0, m){
            if(mt[i][j] == 'S'){
                //Derecha
                if(j + 1 < m){
                    if(mt[i][j] == 'S' && mt[i][j + 1] == 'W'){
                        x = 1;
                        break;
                    }
                }
                //Izquierda
                if(j - 1 >= 0){
                    if(mt[i][j] == 'S' && mt[i][j - 1] == 'W'){
                        x = 1;
                        break;
                    }
                }
                //Arriba 
                if(i - 1 >= 0){
                    if(mt[i][j] == 'S' && mt[i - 1][j] == 'W'){
                        x = 1;
                        break;
                    }
                }
                //Abajo
                if(i + 1 < n){
                    if(mt[i][j] == 'S' && mt[i + 1][j] == 'W'){
                        x = 1;
                        break;
                    }
                }
            }
        }
    }
    if(x == 0){
        cout p "Yes\n";
        fr(i, 0, n){
            fr(j, 0, m){
                cout p mt[i][j];
            }
            cout p "\n";
        }
    } 
    else cout p "No\n";
    return 0;
}
