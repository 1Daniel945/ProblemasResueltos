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

unordered_map<int, vector<int>>input_node;
unordered_map<int, vector<int>>output_node;
unordered_map<int, bool>mark;
unordered_set<int>allNodes;

struct v { int x, y; };

bool isStart(int n) {
    int x = 0, node;
    for(auto e : allNodes) {
        x = input_node[e].size() + output_node[e].size();
        if(x == n - 1) {
            node = e;
            break;
        }
    }
    for(auto e : allNodes) {
        if(e != node) {
            x = input_node[e].size() + output_node[e].size();
            if(x != 1) return 0;
        }
    }
    return 1;
}

bool isBus(int n) {
    int c = 0, c1 = 0, x;
    for(auto e : allNodes) {
        x = input_node[e].size() + output_node[e].size();
        if(x == 2) c++;
        else if(x == 1) c1++;
    }
    if(c1 == 2 && c == n - 2) return 1;
    return 0;
}

bool isRing() {
    int c = 0;
    for(auto e : allNodes) {
        if(input_node[e].size() + output_node[e].size() != 2) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n, m; 
    cin in n in m;
    v pp;
    fr(i, 0, m) {
        cin in pp.x in pp.y;
        output_node[pp.x].pb(pp.y);
        input_node[pp.y].pb(pp.x);
        allNodes.insert(pp.x);
        allNodes.insert(pp.y);
    }
    if(isStart(n)) cout p "star topology\n";
    else if(isBus(n)) cout p "bus topology\n";
    else if(isRing()) cout p "ring topology\n";
    else cout p "unknown topology\n";
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}