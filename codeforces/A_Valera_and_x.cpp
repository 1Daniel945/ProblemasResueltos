#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significant bit
#define out (i == n - 1 ? "\n" : ", ")
typedef long long ll;
using namespace std;

void solve(){
    int n; cin in n;
    char mt[n][n];
    set<char>st;
    fr(i, 0, n){
        fr(j, 0, n){
            cin in mt[i][j];
            st.insert(mt[i][j]);
        }
    }
    if(st.size() == 2){
        string s = "", s1 = "";
        int x = 0, y = n - 1;
        fr(i, 0, n){
            fr(j, 0, n){
                if(i == j || (i == x && j == y)) s += mt[i][j]; 
                else s1 += mt[i][j];
            }
            x++, y--;
        }
        if(count(s.begin(), s.end(), s[0]) == (int)s.size() && count(s1.begin(), s1.end(), s1[0]) == (int)s1.size()) cout p "YES\n";
        else cout p "NO\n";
    }
    else cout p "NO\n";
}

int main(){
    fast_io
    solve();
    return 0;
}
