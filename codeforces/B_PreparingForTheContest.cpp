#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve(){
    int t, n;
    int k;
    cin in t;
    while(t--){
        cin in n in k;
        if(k == 0){
            fi(i, n, 1) cout p i p " ";
            cout p "\n";
        }
        else{
            //if a[i] > lastProblem; k++;
            int last = 0;
            fr(i, 1, n + 1){
                if(k > 0){
                    cout p i p " ";
                    k--;
                }
                else{
                    last = i;
                    break;
                }
            }
            fi(i, n, last) cout p i p " ";
            cout p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
} 