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

void solve(){
    int t; cin in t;
    string s;
    while(t--){
        cin in s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        char c = s[1];
        if(c == '='){   
            if(a == b) cout p s p "\n";
            else{
                if(a < b) s[1] = '<';
                else s[1] = '>';
                cout p s p "\n";
            }
        }
        else if(c == '>'){
            if(a == b) cout p a p "=" p b p "\n";
            else if(a > b) cout p s p "\n";
            else{
                if(a + 1 <= 9 && a + 1 > b){
                    a++;
                    s[0] = a + '0';
                }
                else{
                    if(b + 1 <= 9) a = b + 1, s[0] = a + '0';
                    else s[1] = '<';
                }
                cout p s p "\n";
            }
        }
        else{
            if(a == b) cout p a p "=" p b p "\n";
            else if(a < b) cout p s p "\n";
            else{
                if(a - 1 >= 0 && a - 1 < b){
                    a--;
                    s[0] = a + '0';
                }
                else{
                    if(b - 1 >= 0) a = b - 1, s[0] = a + '0';
                    else s[1] = '>';
                }
                cout p s p "\n";
            }
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  