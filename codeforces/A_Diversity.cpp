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
    string s;
    int n;
    cin in s in n;
    set<int>st;
    map<char, int>mp;
    int x = 0;
    if(s.size() < n) {
        cout p "impossible\n"; 
        return;
    }
    fr(i, 0, s.size()){
        mp[s[i]]++;
        st.insert(s[i]);
    }
    if(st.size() < n){
        fr(j, 0, 26){
            char c = (j + 'a');
            if(mp[c] == 0){
                mp[c] = 1;
                st.insert(c);
                x++;
            }
            if((int) st.size() == n) break;
        }
    }
    st.size() >= n ? cout p x p "\n" : cout p "impossible\n";
}

int main(){
    fast_io
    solve();
    return 0;
}  