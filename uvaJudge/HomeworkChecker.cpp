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
    string s;
    int c = 0;
    while(cin in s){
        int x, y, ans;
        char sig;
        if(s.find('+') != string :: npos){
            x = s.find('+');
            sig = '+';
        }
        else x = s.find('-'), sig = '-';
        y = s.find('=');
        int a = stoi(s.substr(0, x));
        int b = stoi(s.substr(x + 1, y - x - 1));
        if(s.substr(y + 1, (int) s.size() - y) == "?") continue;
        ans = stoi(s.substr(y + 1, (int) s.size() - y));
        if(sig == '+') a + b == ans ? c++ : c;
        else a - b == ans ? c++ : c;
    }
    cout p c p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}
