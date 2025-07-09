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
    int n; cin in n;
    int x = n * 4;
    char mt[5][x];
    fr(i, 0, 5){
        fr(j, 0, x){
            cin in mt[i][j];
        }
    }
    vector<int>v;
    fr(i, 0, 5){
        fr(j, 0, x){
            //Check if it is one
            if(mt[i][j] == '*' && mt[i + 1][j] == '*' && mt[i + 2][j] == '*' && mt[i + 3][j] == '*' && mt[i + 4][j] == '*'
                && mt[i][j - 1] == '.'){
                v.push_back(1);
            }      
            //Check if it is two or it is three
            if(j + 3 < x){
                if(mt[i][j] == '*' && mt[i][j + 1] == '*' && mt[i][j + 2] == '*' && mt[i][j + 3] == '.'
                    && mt[i + 1][j] == '.' && mt[i + 1][j + 1] == '.' && mt[i + 1][j + 2] == '*' && mt[i + 1][j + 3] == '.'
                    && mt[i + 2][j] == '*' && mt[i + 2][j + 1] == '*' && mt[i + 2][j + 2] == '*' && mt[i + 3][j + 3] == '.'
                    && mt[i + 3][j] == '*' && mt[i + 3][j + 1] == '.' && mt[i + 3][j + 2] == '.' && mt[i + 3][j + 3] == '.'
                    && mt[i + 4][j] == '*' && mt[i + 4][j + 1] == '*' && mt[i + 4][j + 2] == '*' && mt[i + 3][j + 3] == '.'){
                    v.push_back(2);
                }
                else if(mt[i][j] == '*' && mt[i][j + 1] == '*' && mt[i][j + 2] == '*' && mt[i][j + 3] == '.'
                    && mt[i + 1][j] == '.' && mt[i + 1][j + 1] == '.' && mt[i + 1][j + 2] == '*' && mt[i + 1][j + 3] == '.'
                    && mt[i + 2][j] == '*' && mt[i + 2][j + 1] == '*' && mt[i + 2][j + 2] == '*' && mt[i + 3][j + 3] == '.'
                    && mt[i + 3][j] == '.' && mt[i + 3][j + 1] == '.' && mt[i + 3][j + 2] == '*' && mt[i + 3][j + 3] == '.'
                    && mt[i + 4][j] == '*' && mt[i + 4][j + 1] == '*' && mt[i + 4][j + 2] == '*' && mt[i + 3][j + 3] == '.'){
                    v.push_back(3);
                }
            }
        }
    }
    for(auto e : v) cout p e;
    cout p "\n";
    return 0;   
}