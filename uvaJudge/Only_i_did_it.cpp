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
    int t, n, v; cin in t;
    ofstream a;
    a.open("a.txt");
    fr(j, 0, t){
        set<int>st, st1, st2, st3, st4, st5;
        map<int, bool>mp, mp1, mp2;
        cin in n;
        fr(i, 0, n){
            cin in v;
            st.insert(v);
            mp[v] = 1;
        }
        cin in n;
        fr(i, 0, n) {
            cin in v;
            st1.insert(v);
            mp1[v] = 1;
        }
        cin in n;
        fr(i, 0, n) {
            cin in v; 
            st2.insert(v);
            mp2[v] = 1;
        }
        int mx = 0;
        for(auto e : st){
            if(mp1[e] == 0 && mp2[e] == 0) st3.insert(e);
        }
        for(auto e : st1){
            if(mp[e] == 0 && mp2[e] == 0) st4.insert(e);
        }
        for(auto e : st2){
            if(mp[e] == 0 && mp1[e] == 0) st5.insert(e);
        }
        mx = max({(int)st3.size(), (int)st4.size(), (int)st5.size()});
        cout p "Case #" p j + 1 p ":\n";
        if(mx == (int) st3.size()) {
          if(mx == 0) cout p "1 " p (int) st3.size() p "\n";
          else cout p "1 " p (int) st3.size() p " ";
          int x = 0;
          for(auto e : st3){
              x++;
              if(x < (int)st3.size()) cout p e p " ";
              else cout p e p "\n";
          }
        }
        if(mx == (int) st4.size()) {
          if(mx == 0) cout p "2 " p (int) st4.size() p "\n";
          else cout p "2 " p (int) st4.size() p " ";
          int x = 0;
          for(auto e : st4){
              x++;
              if(x < (int)st4.size()) cout p e p " ";
              else cout p e p "\n";
          }
        }
        if(mx == (int) st5.size()) {
          if(mx == 0) cout p "3 " p (int) st5.size() p "\n";
          else cout p "3 " p (int) st5.size() p " ";
          int x = 0;
          for(auto e : st5){
              x++;
              if(x < (int) st5.size()) cout p e p " ";
              else cout p e p "\n";
          }
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}