#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define grt greater<int>()
typedef long long ll;
using namespace std;

int main(){
    fastio
    int n;
    cin in n;
    int x = 1;
    fr(i, 0, n){
        fr(j, 0, n - 1 - i){
            cout p " ";
        }        
        fr(j, 0, x){
            cout p "*";
        }
        x += 2;
        cout p "\n";
    }
    fr(i, 0, 2){
        fr(j, 0, n - 2){
            cout p " ";
        }
        fr(j, 0, 3){
            cout p "#";
        }
        cout p "\n";
    }
    return 0;
}
/*
  * 1     3 
 *** 3
***** 5
 ###
 ###
    *        1
   ***       3
  *****      5
 *******     7
*********    9
   ###
   ###   --> 3 sparate with n - 2
*/