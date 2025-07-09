#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

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
    int x = 0;
    fr(i, 0, n){
        fr(j, 0, m){
            if(mt[i][j] == 'W'){
                if(j - 1 >= 0 && mt[i][j - 1] == 'P'){
                    x++;
                    mt[i][j - 1] = 'X';
                }
                else if(j + 1 < m && mt[i][j + 1] == 'P'){
                    x++;
                    mt[i][j + 1] = 'X';
                }
                else if(i - 1 >= 0 && mt[i - 1][j] == 'P'){
                    x++;
                    mt[i - 1][j] = 'X';
                }
                else if(i + 1 < n && mt[i + 1][j] == 'P'){
                    x++;
                    mt[i + 1][j] = 'X';
                }
            }
        }
    }
    cout p x p "\n";
    return 0;   
}