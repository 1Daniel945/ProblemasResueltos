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
    int n; string s;
    cin in n in s;
    vector<bool>v(10, 0);
    fr(i, 0, s.size()){
        if(s[i] == 'L'){
            fr(i, 0, 10){
                if(v[i] == 0){
                    v[i] = 1;
                    break;
                }
            }
        }
        else if(s[i] == 'R'){
            fi(i, 9, 0){
                if(v[i] == 0){
                    v[i] = 1;
                    break;
                }
            }
        }
        else{
            int x = s[i] - '0';
            v[x] = 0;
        }
    }
    fr(i, 0, 10) cout p v[i];
    cout p "\n";
}

int main(){ 
    fast_io
    solve();
    return 0;
}