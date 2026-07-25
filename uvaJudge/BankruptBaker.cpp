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
#define tab "\t"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solve() {
    int t; cin in t;
    string  binderName, recipeName;
    int n, m, b, k;
    map<string, int>ingredients;
    cin.ignore();
    while(t--) {
        getline(cin, binderName);
        fr(i, 0, binderName.size()) cout p (char) toupper(binderName[i]);
        cout p "\n";
        cin in m in n in b;
        map<int, set<string>>mp;
        pair<string, int>pp;
        fr(i, 0, m) {
            cin in pp.ff in pp.ss;
            ingredients[pp.ff] = pp.ss;
        }
        cin.ignore();
        fr(i, 0, n) {
            getline(cin, recipeName);
            cin in k;
            int amount = 0;
            fr(j, 0, k) {
                cin in pp.ff in pp.ss;
                amount += pp.ss * ingredients[pp.ff];
            }
            if(amount <= b) {
                mp[amount].insert(recipeName);
            }
            cin.ignore();
        }
        if(mp.empty()) cout p "Too expensive!\n";
        else {
            for(auto e : mp) {
                for(auto e1 : e.ss) cout p e1 p "\n";
            }
        }
        cout p "\n";
    }
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}  