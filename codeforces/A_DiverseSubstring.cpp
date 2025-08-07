#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
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
    int n; string s, s1 = "";
    cin in n in s;
    set<char>st;
    map<char, int>mp;
    fr(i, 0, s.size()){
        st.insert(s[i]);
        mp[s[i]]++;
        if(mp[s[i]] <= n / 2){
          if(!s1.empty()){
            if(s1.back() != s[i]){
              s1 += s[i];
            }
          }
          else s1 += s[i];
        }
        if(s1.size() == 2) break;
    }
    if((int)st.size() == 1) cout p "NO\n";
    else{
        cout p "YES\n" p s1 p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  