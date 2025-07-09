#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
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
    string s, s1, s2 = "";
    getline(cin, s);
    getline(cin, s1);
    map<char, bool>mp;
    s1.pop_back();
    s1.erase(s1.begin());
    fr(i, 0, s1.size()){
        mp[s1[i]] = 1;
    }
    fr(i, 0, s.size()){
        if(mp[s[i]] == 0){
            s2 += s[i];
        }
    }
    s1 = "";
    fr(i, 0, s2.size()){
        if(s1.empty()){
            if(s2[i] != ' ') s1 += s2[i];
        }
        else if(s2[i] != s1.back()){
            s1 += s2[i];
        }
    }
    while(s1.back() == ' '){
        s1.pop_back();
    }
    cout p s1 p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}