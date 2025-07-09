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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t, n; cin in t;
    while(t--){
        cin in n;
        vector<int>a(n);
        int x = 0;
        fr(i, 0, n) {
            cin in a[i];
            if(a[i] % 2 == 0) x = i + 1;  
        }
        if(x != 0) cout p "1\n" p x p "\n";
        else{
            int sm = 0, c = 0;
            vector<int>indexes;
            fr(i, 0, n){
                sm += a[i]; 
                indexes.pb(i);
                c++;
                if(sm % 2 == 0){
                    break;
                }
            }
            if(sm % 2 == 0){
                cout p c p "\n";
                fr(i, 0, c){
                    cout p indexes[i] + 1 p out(i, c);
                }
            }
            else cout p "-1\n";
        }
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}