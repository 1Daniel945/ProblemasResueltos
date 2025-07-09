#include <bits/stdc++.h>
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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int n; cin in n;
    vector<int>a(n);
    set<int>st, st1;
    fr(i, 0, n){
        cin in a[i];
        st.insert(a[i]);
    }
    if(n == 1 || n == 2) cout p a[0] p "\n";
    else{ 
        fi(i, n - 1, 0){
            st1.insert(a[i]);
            if(st1.size() == st.size()){
                cout p a[i] p "\n";
                break;
            }
        }
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}