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
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        fr(i, 0, n){
            cin in a[i];
        }
        int x = 0;
        while(!is_sorted(a.begin(), a.end())){
            fr(i, 0, n - 1){
                if(a[i] > a[i + 1]){
                    swap(a[i], a[i + 1]);
                    x++;
                }
            }
        }
        cout p "Optimal train swapping takes " p x p " swaps.\n";
    }
    return 0;
}