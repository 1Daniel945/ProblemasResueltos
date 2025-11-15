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

vector<bool>mark((3 * 1e4) + 5, 0);
vector<vector<int>>adj((3 * 1e4) + 5);

void dfs(int node, int target){
    mark[node] = 1;
    for(auto e : adj[node]){
        if(!mark[e]){
            dfs(e, target);
        }
    }
}

void solve(){
    int n, a, target;
    cin in n in target;
    fr(i, 0, n - 1){
        cin in a;
        adj[i + 1].pb((i + 1 + a));
    }  
    dfs(1, target);
    if(mark[target] == 1) cout p "YES\n";
    else cout p "NO\n";
}

int main(){
    fast_io
    solve();    
    return 0;
}