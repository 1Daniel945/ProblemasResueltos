#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define o <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    vector<string>st(3);
    map<char, char>mp;
    fr(i, 0, 3){
        cin in st[i];
    }
    fr(i, 0, st[0].size()){
        mp[st[0].at(i)] = st[1].at(i);
    }
    string out = "";
    fr(i, 0, st[2].size()){
        if(mp[tolower(st[2].at(i))]){
            if(st[2].at(i) >= 65 && st[2].at(i) <= 90){
                out += toupper(mp[tolower(st[2].at(i))]);
            }
            else out += mp[tolower(st[2].at(i))];
        }
        else out += st[2].at(i);
    }
    cout o out o "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}