#include <bits/stdc++.h>
#include <tuple>
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
    int t; cin in t;
    set<tuple<double, string, int>>st;
    while(t--){
        int id;
        double pp, e;
        string name;
        cin in id;
        cin.ignore();
        getline(cin, name);
        cin in pp in e;
        pp /= pow(e, 2);
        st.insert({pp, name, id});
    }
    for(auto i = st.rbegin(); i != st.rend(); ++i){
        auto[w, n, id] = *i;
        cout p id p " " p n p " " p fixed p setprecision(1) p w p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}