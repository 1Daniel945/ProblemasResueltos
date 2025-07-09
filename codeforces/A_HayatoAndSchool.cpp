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
    while (t--){
        cin in n;
        vector<int>a(n);
        int b = -1, c = -1, d = -1;
        int s = 0, odd = 0;
        bool f = 0;
        fr(i, 0, n){
            cin in a[i];
            if(a[i] % 2 == 0){
                odd++;
                s += a[i];
                if(b == -1) b = i;
                else if(c == -1) c = i;
                if(odd == 2) f = 1;
            }
            else d = i;
        }
        if(f == 1){
            if(d != -1 && c != -1 && b != -1){
                cout p "YES\n" p b + 1 p " " p c + 1 p " " p d + 1 p "\n";
            }
            else cout p "NO\n";
        }
        else{
            s = 0;
            b = -1, c = -1, d = -1;
            fr(i, 0, n){
                fr(j, 0, n){
                    if(i != j && (a[i] + a[j]) % 2 == 0){
                        b = i, c = j;
                        s = a[i] + a[j];
                        break;
                    }
                }
            }
            fr(i, 0, n){
                if((s + a[i]) % 2 == 1 && i != b && i != c){
                    d = i;
                    break;
                }
            }
            if(d != -1 && c != -1 && b != -1) cout p "YES\n" p b + 1 p " " p c + 1 p " " p d + 1 p "\n";
            else cout p "NO\n"; 
        }
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}