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
    int t1, dim, k;
    cin in t1;
    fr(a, 0, t1){
        cin in dim in k;
        char m[dim][dim];
        fr(i, 0, dim){
            fr(j, 0, dim){
                cin in m[i][j];
            }
        }
        if(dim == k){
            cout p m[0][0] p "\n";
        }
        else if(k == 1){
            fr(i, 0, dim){
                fr(j, 0, dim){
                    cout p m[i][j];
                }
                cout p "\n";
            }
        }
        else{
            int dim1 = dim / k;
            char m1[dim1][dim1];
            int c = 0, salto = 0;
            fr(i, 0, dim1){
                fr(j, 0, dim1){
                    m1[i][j] = m[salto][c];
                    if(c + k < dim1){
                        c += k;
                    }
                    else k = 0;
                }
                salto += k;
            }
            fr(i, 0, dim1){
                fr(j, 0, dim1){
                    cout p m1[i][j];
                }
                cout p "\n";
            }
        }
    }
    return 0;   
}