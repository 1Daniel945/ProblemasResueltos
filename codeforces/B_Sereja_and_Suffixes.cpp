#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n, m, l;
    cin in n in m;
    vector<int>a(n), suffixes(n);
    set<int>st;
    fr(i, 0, n) cin in a[i];
    fi(i, n, 0){
        st.insert(a[i]);
        suffixes[i] = st.size();
    }
    fr(i, 0, m){
        cin in l;
        cout p suffixes[l - 1] p "\n";
    }
}

int main(){
    fast_io 
    solve();
    return 0;
}