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
#define out(n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int n, v, s;
    cin in n in v;
    vector<int>a(n), ans;
    bool isT;
    fr(i, 0, n){
        cin in a[i];
        isT = 0;
        fr(j, 0, a[i]){
            cin in s;
            if(s < v && isT == 0){
                isT = 1;
                ans.push_back(i + 1);
            }
        }
    }
    cout p ans.size() p "\n";
    if(ans.size() == 0) cout p "\n";
    else{
        fr(i, 0, ans.size()){
            cout p ans[i] p out(ans.size());
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}