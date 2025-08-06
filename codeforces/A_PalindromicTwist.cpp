#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
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
int MOD = 1e9 + 7;

void solve(){
    int t, n; string s;
    cin in t;
    while(t--){
        cin in n in s;
        char a, b, c, d;
        string s1 = "", s2 = "";
        fr(i, 0, s.size() / 2){
            if(s[i] == s[s.size() - 1 - i]){
                s1 += s[i];
                s2 += s[s.size() - 1 - i];
            }
            else{
                if(s[i] == 'a') b = s[i] + 1;
                else if(s[i] == 'z') a = s[i] - 1;
                else{
                    a = s[i] - 1;
                    b = s[i] + 1;
                }
                if(s[s.size() - 1 - i] == 'a') d = s[s.size() - 1 - i] + 1;
                else if(s[s.size() - 1 - i] == 'z') c = s[s.size() - 1 - i] - 1;
                else{
                    c = s[s.size() - 1 - i] - 1;
                    d = s[s.size() - 1 - i] + 1;
                }
                if(a == c && c != '-'){
                    s1 += a;
                    s2 += c;
                }
                else if(a == d && a != '-'){
                    s1 += a;
                    s2 += d;
                }
                else if(b == c && b != '-'){
                    s1 += b;
                    s2 += c;
                }
                else if(b == d && b != '-'){
                    s1 += b;
                    s2 += d;
                }
                a = '-', b = '-', c = '-', d = '-';
            }
        }
        if(s1 == s2 && (int) (s1 + s2).size() == n) cout p "YES\n";
        else cout p "NO\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
} 