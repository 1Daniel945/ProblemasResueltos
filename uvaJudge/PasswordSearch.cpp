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

void solve(){
    int n, x ;
    string s, s1;
    while(cin in n in s){
        x = 0;
        s1 = "";
        map<string, int>mp;
        while(x + n <= (int) s.size()){
            mp[s.substr(x, n)]++;
            x++;
        }
        int mx = 0;
        for(auto e : mp){
            if(mp[e.ff] > mx){
                s1 = e.ff;
                mx = e.ss;
            }
        }
        cout p s1 p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  