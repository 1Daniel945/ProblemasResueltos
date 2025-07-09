#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second;
typedef long long ll;
using namespace std;

void solve(){
    int n, t; cin in t;
    string s;
    int x = 0;
    while(t--){
        cin in n in s;
        x = 0;
        map<char, int>mp;
        vector<char>vc;
        fr(i, 0, s.size()){
            mp[s.at(i)]++;
            if(find(vc.begin(), vc.end(), s.at(i)) == vc.end()){
                vc.push_back(s.at(i));
            }
        }
        fr(i, 0, vc.size()){
            if(mp[vc[i]] >= (vc[i] - 'A') + 1 && (n - (vc[i] - 'A')) >= 0){
                n -= vc[i] - 'A';
                x++;
            }
        }
        cout p x p "\n";
    }
}

int main(){
    fast_io
    solve();
}