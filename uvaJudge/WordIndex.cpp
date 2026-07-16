#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : "")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;
string s = "abcdefghijklmnopqrstuvwxyz";
void solve() {
    int b = 1, c = 1, d = 1, e = 1;
    map<string, int>v1, v2, v3, v4, v5;
    fr(i, 0, 26) {
        string s1 = {s[i]};
        v1[s1];
        fr(j, 0, 26) {
            if(s[i] < s[j]) {
                s1 = {s[i], s[j]};
                v2[s1];
            }
            fr(k, 0, 26) {
                if(s[i] < s[j] && s[j] < s[k]) {
                    s1 = {s[i], s[j], s[k]};
                    v3[s1] = c;
                }
                fr(l, 0, 26) {
                    if(s[i] < s[j] && s[j] < s[k] && s[k] < s[l]) {
                        s1 = {s[i], s[j], s[k], s[l]};
                        v4[s1] = d;
                    }
                    fr(m, 0, 26) {
                        if(s[i] < s[j] && s[j] < s[k] && s[k] < s[l] && s[l] < s[m]) {
                            s1 = {s[i], s[j], s[k], s[l], s[m]}; 
                            v5[s1] = e;
                        }
                    }
                }
            }
        }
    }
    string input;
    vector<string>vs;
    unordered_map<string, int>mp;
    int x = 1;
    for(auto e : v1) mp[e.ff] = x, x++;
    for(auto e : v2) mp[e.ff] = x, x++;
    for(auto e : v3) mp[e.ff] = x, x++;
    for(auto e : v4) mp[e.ff] = x, x++;
    for(auto e : v5) mp[e.ff] = x, x++;
    while(cin in input) {
        if(mp.count(input)) {
            cout p mp[input] p "\n";
        }
        else cout p "0\n";
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}