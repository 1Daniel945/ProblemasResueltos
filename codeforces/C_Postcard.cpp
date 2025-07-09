#include <bits/stdc++.h>
#include <tuple>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significant bit
#define out (i == n - 1 ? "\n" : ", ")
typedef long long ll;
using namespace std;

void solve(){
    string s, s1; int n;
    cin in s in n;
    s1 = "";
    fr(i, 0, s.size()){
        if(s[i] != '*' && s[i] != '?') {
            s1 += s[i];
        }
    }
    if((int)s1.size() == n) cout p s1 p "\n";
    else if((int) s1.size() > n){
        //Quitar letras 
        int x = (int) s1.size() - n;
        s1 = "";
        fr(i, 0, s.size()){
            if(s[i] != '*' && s[i] != '?') s1 += s[i];
            else if((s[i] == '*' || s[i] == '?') && x > 0){
                s1.pop_back();
                x--;
            }
        }
        if((int)s1.size() == n) cout p s1 p "\n";
        else cout p "Impossible\n";
    }
    else{
        //Insertar letras
        int x = n - s1.size();
        s1 = "";
        fr(i, 0, s.size()){
            if(s[i] != '?' && s[i] != '*') s1 += s[i];
            if((s[i]=='*')){
                fr(j, 0, x){
                    s1 += s1.back();
                }
                x = 0;
            }
        }
        if((int)s1.size() == n) cout p s1 p "\n";
        else cout p "Impossible\n";        
    }
}

int main(){
    fast_io
    solve();
    return 0;
}