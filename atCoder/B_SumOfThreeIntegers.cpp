#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int k, s, c = 0;
    cin in k in s;
    fr(i, 0, k + 1){
        fr(j, 0, k + 1){
            int x = i + j; 
            if(s - x >= 0 && s - x <= k){
                if((s - x) + x == s){
                    c++;
                }
            }
        }
    }
    cout p c p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}