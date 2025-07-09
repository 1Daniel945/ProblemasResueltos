#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
    vector<int>a(n);
    fr(i, 0, n){
        cin in a[i];
    }
    //two points
    int s = 0, d = 0;
    bool turn = 0;
    while(a.size() > 1){
        if(turn == 0){
            if(a[0] > a[a.size() - 1]){
                s += a[0];
                a.erase(a.begin());
            }
            else if(a[a.size() - 1] > a[0]){
                s += a[a.size() - 1];
                a.pop_back();
            }
            turn = 1;
        }
        else{
            if(a[0] > a[a.size() - 1]){
                d += a[0];
                a.erase(a.begin());
            }
            else if(a[a.size() - 1] > a[0]){
                d += a[a.size() - 1];
                a.pop_back();
            }
            turn = 0;
        }
    }
    if(turn == 0) s += a[0];
    else d += a[0];
    cout p s p " " p d p "\n";
    return 0;   
}
