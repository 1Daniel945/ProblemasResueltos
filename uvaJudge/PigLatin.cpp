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

string pigLatin(string s) {
    char c = tolower(s[0]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        s.append("ay");
    }
    else if(isalpha(c)) {
        char b = s[0];
        s.erase(s.begin());
        s.pb(b);
        s.append("ay");
    }
    return s;
}

void solve() {
    string s, s1;
    while(getline(cin, s)) {
        vector<string>v;
        fr(i, 0, s.size()) {
            if(isalpha(s[i])) s1.pb(s[i]);
            else {
                v.pb(pigLatin(s1)); 
                s1.clear();
                s1.pb(s[i]);
                v.pb(pigLatin(s1));
                s1.clear();
            }
        }
        if(!s1.empty()) v.pb(pigLatin(s1));
        fr(i, 0, v.size()) cout p v[i] p out(i, v.size());
        s1.clear();
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}