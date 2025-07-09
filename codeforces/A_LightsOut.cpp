#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int mt[3][3];
    bool status[3][3];
    fr(i, 0, 3){
        fr(j, 0, 3) cin in mt[i][j], status[i][j] = 1;
    }   
    fr(i, 0 , 3){
        fr(j, 0, 3){
            if(mt[i][j] != 0){
                while(mt[i][j]--){
                    //up
                    if(status[i][j] == 1) status[i][j] = 0;
                    else status[i][j] = 1;
                    if(i - 1 >= 0){
                        if(status[i - 1][j] == 1) status[i - 1][j] = 0;
                        else status[i - 1][j] = 1;
                    }
                    //down
                    if(i + 1 < 3){
                        if(status[i + 1][j] == 1) status[i + 1][j] = 0;
                        else status[i + 1][j] = 1;
                    }
                    //left
                    if(j - 1 >= 0){
                        if(status[i][j - 1] == 1) status[i][j - 1] = 0;
                        else status[i][j - 1] = 1;
                    }
                    //Right
                    if(j + 1 < 3){
                        if(status[i][j + 1] == 1) status[i][j + 1] = 0;
                        else status[i][j + 1] = 1;
                    }
                }
            }
        }
    }
    fr(i, 0, 3){
        fr(j, 0, 3) cout p status[i][j];
        cout p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}