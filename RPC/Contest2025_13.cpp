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

void solveD(){
    int n, r, c;
    cin in n in r in c;
    int middle = (n / 2) + 1;
    int mn = 100 - ((middle - 1) * 10);
    int mt[n][n];
    fill((int*)mt, (int*)mt + (n * n), -1);
    int x = 0, y = n - 1, t = middle;
    fr(k, 0, t){
        fr(i, 0, n){
            fr(j, 0, n){
                if(x < n - 1 && y >= 0){
                    if(j == x || j == y || i == x || i == y){
                        if(mt[i][j] == -1)
                        mt[i][j] = mn;
                    }
                }
            }
        }
        mn += 10;
        x++;
        y--;
    }
    cout p mt[r - 1][c - 1] p "\n";
}

void solveH(){
    int n, x; cin in n;
    map<int, int>mp;
    set<int>st;
    fr(i, 0, 10 * (n * 5)){
        cin in x;
        mp[x]++;
        if(mp[x] > 2 * n){
            st.insert(x);
        }
    }
    if(st.size() == 0){
        cout p "-1\n";
        return;
    }
    vector<int>v;
    for(auto e : st){
        v.pb(e);
    }
    fr(i, 0, v.size()){
        cout p v[i] p out(i, v.size());
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}