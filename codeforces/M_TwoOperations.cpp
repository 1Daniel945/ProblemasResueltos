#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
typedef long long ll;
using namespace std;

void solve(){
    string s; cin in s;
    map<char, int>mp;
    char x = 'a';
    fr(i, 0, 26){
        mp[x] = 0;
        x += 1;
    }
    vector<char>letters;
    fr(i, 0, s.size()){
        mp[s.at(i)]++;
        if(find(letters.begin(), letters.end(), s.at(i)) == letters.end()){
            letters.push_back(s.at(i));
        }
    }
    for(auto e : mp){
        if(e.first != 'z'){
            if(mp[e.first] >= 2){
                mp[e.first + 1] += mp[e.first] / 2;
                mp[e.first] -= (mp[e.first] / 2) * 2;
            }
        }
    }
    string out = "";
    for(auto e : mp){
        if(e.first >= 97 && e.first <= 122 && e.second > 0){
            fr(i, 0, e.second) out += e.first;
        }
    }
    reverse(out.begin(), out.end());
    cout p out p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}