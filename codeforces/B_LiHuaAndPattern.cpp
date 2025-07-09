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
    int n, k, t;
    cin in t;
    while(t--){
        cin in n in k;
        int mt[n][n];
        int mt2[n][n];
        fr(i, 0, n){
            fr(j, 0, n){
                cin in mt[i][j];
            }
        }
        //rotar matriz 180°
        int c = 0;
        fi(i, n, 0){
            fi(j, n, 0){
                mt2[c][n - 1 - j] = mt[i][j];
            }
            c++;
        }
        int x = 0;
        fr(i, 0, n){
            fr(j, 0, n){
                if(mt2[i][j] != mt[i][j]) x++;
            }
        }
        x /= 2;
        k >= x && (n % 2 == 1 || (k - x) % 2 == 0) ? cout p "YES\n" : cout p "NO\n";
    }
    return 0;   
}