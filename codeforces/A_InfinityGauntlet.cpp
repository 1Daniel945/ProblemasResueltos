#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    int n;  cin in n;
    string s;
    map<string, bool>mp = {{"Power", 0},{"Time", 0},{"Space", 0},{"Soul", 0},{"Reality", 0},{"Mind", 0}};
    map<string, string>mp1 = {{"purple", "Power"}, {"green", "Time"}, {"blue", "Space"}, {"orange", "Soul"}, {"red", "Reality"}, {"yellow", "Mind"}};
    vector<string>absent;
    fr(i, 0, n){
        cin in s;
        mp[mp1[s]] = 1;
    }
    for(auto e : mp){
        if(e.ss == 0){
            absent.push_back(e.ff);
        }
    }
    cout p absent.size() p "\n";
    for(auto e : absent){
        cout p e p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}