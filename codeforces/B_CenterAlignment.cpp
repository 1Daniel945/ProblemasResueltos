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
    string s;
    vector<string>vs;
    int mx = 0;
    while(getline(cin, s)){
        mx = max(mx, (int) s.size());
        vs.push_back(s);
    }
    fr(i, 0, mx + 2){
        cout p "*";
    }
    cout p "\n";
    bool isMin = 1;
    fr(i, 0, vs.size()){
        int x = mx - vs[i].size();
        cout p "*";
        if(x > 0){
            if(x  % 2 == 0){
                fr(j, 0, x / 2){
                    cout p " ";
                }
                cout p vs[i];
                fr(j, 0, x / 2){
                    cout p " ";
                }
            }
            else{
                int izq, der;
                if(isMin){
                    izq = x / 2;
                    der = (x / 2) + 1;
                    fr(j, 0, izq){
                        cout p " ";
                    }
                    cout p vs[i];
                    fr(j, 0, der){
                        cout p " ";
                    }
                    isMin = 0;
                }
                else{
                    izq = (x / 2) + 1;
                    der = x / 2;
                    fr(j, 0, izq){
                        cout p " ";
                    }
                    cout p vs[i];
                    fr(j, 0, der){
                        cout p " ";
                    }
                    isMin = 1;
                }
            }
        }
        else cout p vs[i];
        cout p "*\n";
    }
    fr(i, 0, mx + 2){
        cout p "*";
    }
    cout p "\n";
    return 0;   
}