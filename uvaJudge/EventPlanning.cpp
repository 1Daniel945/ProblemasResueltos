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
    int n, b, h, w;
    while(cin in n in b in h in w){
        ll mn = 1e9, price;
        while(h--){
            bool x = 0;
            cin in price; //precio por persona
            int ws[w];
            fr(i, 0, w){
                cin in ws[i];//Cantidad de camas en un hotel por semana
            }
            fr(i, 0, w){
                if(ws[i] == 0){
                    x = 1;
                    break;
                } 
            }
            if(x == 0) mn = min(n * price, mn);
        }
        if(mn <= b) cout p mn p "\n";
        else cout p "stay home\n"; 
    }
    return 0;   
}