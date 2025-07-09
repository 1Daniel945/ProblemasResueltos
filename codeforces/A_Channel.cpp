#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int t, n, a, q; cin in t;
    string s;
    while(t--){
        cin in n in a in q in s;
        //Base case
        if(n == a) cout p "YES\n";
        else{
            bool f = 0;
            int a1 = a;
            fr(i, 0, q){
                if(s[i] == '+') a++;
                else a--;
                if(a == n){
                    f = 1;
                    break;
                }
            }
            if(f == 1) cout p "YES\n";
            else{
                int x = count(s.begin(), s.end(), '+');
                if(x + a1 >= n) cout p "MAYBE\n";
                else cout p "NO\n";
            }
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}
