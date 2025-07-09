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
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    int t; cin in t;
    string s, s1;
    while(t--){ 
        cin in s in s1;
        if(count(s.begin(), s.end(), '?') == (int) s.size()){
            cout p "YES\n";
            cout p s1;
            int x = (int)s.size() - (int)s1.size();
            fr(i, s.size() - 1, (s.size() - 1) + x){
                cout p s1[s1.size() - 1];
            }
            cout p "\n";
        }
        else{
            if(s.size() == s1.size()){
                fr(i, 0, s.size()) {
                    s[i] == '?' ? s[i] = s1[i] : s[i];
                }
            }
            else{
                fr(i, 0, s.size()){
                    if(s1.empty()) break;
                    if(s[i] == s1[0]) s1.erase(s1.begin());
                    else if(s[i] == '?'){
                        s[i] = s1[0];
                        s1.erase(s1.begin());
                    }
                }
            }
            if(s1.empty()) {
                if(s.find('?') != string :: npos){
                    fr(i, s.find('?'), s.size()){
                        s[i] == '?' ? s[i] = s[s.find('?') - 1] : s[i];
                    }
                }
                cout p "YES\n" p s p "\n";
            }
            else if(s == s1) cout p "YES\n" p s p "\n";
            else cout p "NO\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}