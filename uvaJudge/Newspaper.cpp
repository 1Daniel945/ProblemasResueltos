#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, k, m; cin in t;
    while(t--){
        cin in k;
        map<char, int>mp;
        pair<char, int>pp;
        fr(i, 0, k){
            cin in pp.ff in pp.ss;
            mp[pp.ff] = pp.ss;
        }
        cin in m;
        vector<string>vs;
        string s;
        cin.ignore();
        fr(i, 0, m){
            getline(cin, s);
            vs.push_back(s);
        }
        //Process
        ll x = 0;
        fr(i, 0, vs.size()){
            fr(j, 0, vs[i].size()){
                x += mp[vs[i][j]];
            }
        }
        string x1 = to_string((double) x / 100); 
        int ps = distance(x1.begin(), find(x1.begin(), x1.end(), '.'));
        cout p x1.substr(0, ps + 3) p "$\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}