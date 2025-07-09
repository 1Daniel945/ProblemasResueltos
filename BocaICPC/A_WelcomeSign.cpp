#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    string s;
    vector<string>vs;
    int mx = 0;
    int n, m;
    cin in n in m;
    while(n--){
        cin in s;
        mx = max(mx, (int) s.size());
        vs.push_back(s);
    }
    bool isMin = 1;
    fr(i, 0, vs.size()){
        int x = mx - vs[i].size();
        if(i > 0) cout p "\n";
        if(x > 0){
            if(x  % 2 == 0){
                fr(j, 0, x / 2){
                    cout p ".";
                }
                cout p vs[i];
                fr(j, 0, x / 2){
                    cout p ".";
                }
            }
            else{
                int izq, der;
                if(isMin){
                    izq = x / 2;
                    der = (x / 2) + 1;
                    fr(j, 0, izq){
                        cout p ".";
                    }
                    cout p vs[i];
                    fr(j, 0, der){
                        cout p ".";
                    }
                    isMin = 0;
                }
                else{
                    izq = (x / 2) + 1;
                    der = x / 2;
                    fr(j, 0, izq){
                        cout p ".";
                    }
                    cout p vs[i];
                    fr(j, 0, der){
                        cout p ".";
                    }
                    isMin = 1;
                }
            }
        }
        else cout p vs[i];
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}
/*
celdas impares l < r
celdas pares l > r
*/