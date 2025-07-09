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
#define out (i == n - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    string s, s1;
    cin in s in s1;
    bool b = 0;
    int ps = -1, ps1 = -1;
    fr(i, 0, s.size()){
        if(s[i] != '0'){
            b = 1;
            ps = i;
            break;
        }
    }
    fr(i, 0, s1.size()){
        if(s1[i] != '0'){
            b = 1;
            ps1 = i;
            break;
        }
    }
    if(b == 0) cout p "=\n";
    else{
        if(ps != -1) s = s.substr(ps, (int) s.size() - ps);
        else s = '0';
        if(ps1 != -1) s1 = s1.substr(ps1, (int) s1.size() - ps1);
        else s1 = '0';
        if(s == s1) cout p "=\n";
        else{
            if(s.size() > s1.size()) cout p ">\n";
            else if(s.size() < s1.size()) cout p "<\n";
            else{
                if(s > s1) cout p ">\n";
                else if(s < s1) cout p "<\n";
            }
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}