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
#define out(i, n) (i == (int) n - 1 ? "\"\n" : ",")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;

void solve(){
    string s, s1 = ""; 
    cin in s;
    vector<string>va, vb;
    bool b = 0, zero = 0;
    int sz = (int) s.size();
    fr(i, 0, sz){
        if(s[i] == ',' || s[i] == ';'){
            if((int)s1.size() == 1 && isalpha(s1[0])){
                vb.pb(s1);
            }
            else{
                if(zero == 1 && (int) s1.size() == 1){
                    va.pb(s1);
                }
                else if(b == 1) vb.pb(s1);
                else if(s1.empty()) vb.pb("");
                else va.pb(s1);
            }
            b = 0, zero = 0, s1 = "";
        }
        else{
            s1 += s[i];
            if(!isdigit(s[i])) b = 1;
            else if(s1[0] == '0') b = 1, zero = 1;
        }
    } 
    if((int) s1.size() > 1){
        if(isdigit(s1[0]) == 1 && s1[0] != '0' && b == 0) va.pb(s1);
        else vb.pb(s1);
    }
    else{
        if(isdigit(s1[0]) == 1) va.pb(s1);
        else vb.pb(s1);
    }
    if(va.empty()) cout p "-\n";
    fr(i, 0, va.size()){
        if(i == 0) cout p "\"";
        cout p va[i] p out(i, va.size());
    }
    if(vb.empty()) cout p "-\n";
    fr(i, 0, vb.size()){
        if(i == 0) cout p "\"";
        cout p vb[i] p out(i, vb.size());
    }
}

int main(){
    fast_io
    solve();
    return 0;
}