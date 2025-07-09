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
    int t, n; cin in t;
    fr(j, 1, t + 1){
        cin in n;
        int a;
        int x = 0, y = 0;
        fr(i, 0, n){
            cin in a;
            int b = a;
            int c = a;
            while(b >= 30){
                b -= 30;
                x += 10;
            }
            if(b <= 29) x += 10;
            while(c >= 60){
                c -= 60;
                y += 15;
            }
            if(c <= 59) y += 15;
        }
        if(x < y){
            cout p "Case " p j p  ": Mile " p x p "\n";
        }
        else if(x == y){
            cout p "Case " p j p  ": Mile Juice " p x p "\n";
        }
        else cout p "Case " p j p  ": Juice " p y p "\n";
    }
    return 0;   
}