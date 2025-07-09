#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
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
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int n, q;
    string s;
    pair<int, int>pp;
    cin in n in q in s;
    vector<int>prefix(n);
    prefix[0] = s[0] - 'a';
    fr(i, 1, n){
        prefix[i] = prefix[i - 1] + (s[i] - 'a') + 1;
    }
    while(q--){
        cin in pp.ff in pp.ss;
        if(pp.ff == pp.ss) cout p (s[pp.ff - 1] - 'a') + 1 p "\n";
        else{
            cout p prefix[pp.ss - 1] - prefix[pp.ff - 1] + (s[pp.ff - 1] - 'a') + 1 p "\n";
        }
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}