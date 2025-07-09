#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define f first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    int d, l, r, c;
    char mt[10][10];
    bool isT = 0;
    memset(mt, '.', sizeof(mt));    
    while (t--){
        cin in d in l in r in c;
        if(d == 0){
            //Horizontal --->
            pair<int, int>point;
            point.f = r - 1;
            point.ss = c - 1;
            if(point.ss + l - 1 >= 10){
                isT = 1;
            }
            else{
                int x = 0;
                while(x < l){
                    if(mt[point.f][point.ss] == '$'){
                        isT = 1;
                        break;
                    }
                    else{
                        mt[point.f][point.ss] = '$';
                        point.ss++;
                        x++;
                    }
                }
            }
        }
        else{
            //Vertical 
            pair<int, int>point;
            point.f = r - 1;
            point.ss = c - 1;
            if(point.f + l - 1 >= 10){
                isT = 1;
            }
            else{
                int x = 0;
                while(x < l){
                    if(mt[point.f][point.ss] == '$'){
                        isT = 1;
                        break;
                    }
                    else{
                        mt[point.f][point.ss] = '$';
                        point.f++;
                        x++;
                    }
                }
            }
        }
    }
    isT == 0 ? cout p "Y\n" : cout p "N\n";
}

int main(){
    fastio
    solve();
    return 0;
}
