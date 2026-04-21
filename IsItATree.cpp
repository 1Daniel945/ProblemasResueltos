#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i < (int) n; ++i)
#define fi(i, x, n) for(int i = (int) x - 1; i >= n; --i)
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

unordered_map<int, vector<int>>output_node, input_node;
unordered_map<int, bool>mark;
int c = 0;

void dfs(int node) {    
    mark[node] = 1;
    for(auto e : output_node[node]) {
        if(!mark[e]) dfs(e);
    }
}

int find_root() {
    int root = -1;
    for(auto e : output_node) {
        if(input_node[e.ff].size() == 0) {
            root = e.ff;
            return root;
        }
    }
    return root;
}

bool isTree() {
    if(mark.size() != output_node.size()) return 0; 
    for(auto e : mark) {
        if(e.ss == 0) return 0;
        else c++;
    }
    return 1;
}

bool hasOneNode(int root) {
    for(auto e : input_node) {
        if(e.ss.size() > 1 && e.ff != root) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int t = 0;
    pair<int, int>pp;
    string s;
    while(cin in pp.ff in pp.ss) {
        if(pp.ff < 0 && pp.ss < 0) return;
        if(pp.ff != 0 && pp.ss != 0) {
            output_node[pp.ff].pb(pp.ss);
            input_node[pp.ss].pb(pp.ff);
        }
        else {
            t++;
            s = " a tree.";
            int root = find_root();
            dfs(root);
            if(isTree() && !hasOneNode(root) && c == output_node.size()) s = " not" + s;
            if(!isTree()) s = " not" + s;
            cout p "Case " p t p " is" p s p "\n";
            output_node.clear();
            input_node.clear();
            mark.clear();
            c = 0;
        }
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}