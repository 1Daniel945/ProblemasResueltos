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
    int n, m; cin in n;
    string text, s;
    bool CapsLock = 0;
    cin.ignore();
    getline(cin, text);
    string out = "";
    cin in m;
    fr(i, 0, m){
        cin in s;
        if(s == "CapsLock"){
            if(CapsLock == 0) CapsLock = 1;
            else CapsLock = 0;
        }
        if(s == "Backspace"){
            if(!out.empty()) out.erase(out.begin() + (out.size() - 1));
        }
        if(s == "Space") out += " ";
        if(s != "CapsLock" && s != "Backspace" && s != "Space" && CapsLock == 1) out += toupper(s.at(0));
        else if(s != "CapsLock" && s != "Backspace" && s != "Space" && CapsLock == 0) out += tolower(s.at(0));
    }
    if(out == text) cout p "Correct\n";
    else cout p "Incorrect\n";
}

int main(){
    fast_io
    solve();
    return 0;
}