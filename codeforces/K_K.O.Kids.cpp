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
    int n, k;
    string s;
    cin in n in k in s;
    char mt[2][n];
    vector<char>best(n);
    fr(i, 0, s.size()){
        if(s[i] == 'L') mt[0][i] = '.';
        else mt[1][i] = '.';
    }
    fr(i, 0, 2){
        fr(j, 0, n){
            if(mt[i][j] != '.') mt[i][j] = '*';
        }
    }
    int x = 0;
    bool right = 0;
    fr(i, 0, k){
        fr(j, 0, n){
            if(best[j] != 'R' && best[j] != 'L'){
                if(right == 0){
                    if(mt[0][j] == '.'){
                        best[j] = 'L';
                        right = 1;
                    }
                    else{
                        best[j] = 'R';
                        x++;
                        break;
                    }
                }
                else{
                    if(mt[1][j] == '.'){
                        best[j] = 'R';
                        right = 0;
                    }
                    else{
                        best[j] = 'L';
                        x++;
                        break;
                    }
                }
            }
            else{
                best[j] == 'R' ? right = 0 : right = 1;
            }
        }
    }
    cout p k - x p "\n";
}

int32_t main(){
    fast_io
    solve();
    return 0;
}