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
#define out(i, n) (i == (int) n - 1 ? "" : "\n")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

struct input {
    string increment;
    int res;
};

int baseConvert(string s, int base) {
    int ans = 0;
    int sz = (int) s.size();
    fr(i, 0, sz) {
        if(isdigit(s[i])) ans += (s[i] - '0') * pow(base, sz - 1 - i);
        else ans += (10 + (tolower(s[i]) - 'a')) * pow(base, sz - 1- i);
    }
    return ans;
}

void solve() {
    string s; int n;
    while(cin in s in n) {
        if(s == "0" && n == 0) return;
        int x;
        //Hexadecimal a decimal
        if(s.find("x") != string :: npos || s.find("X") != string :: npos) {
            string s1 = s.substr(2, s.size() - 2);
            x = baseConvert(s1, 16);
        }
        //Octal a decimal
        else if(s[0] == '0') {
            string s1 = s.substr(1, s.size() - 1);
            x = baseConvert(s1, 8);
        }
        else x = stoi(s);
        input y;
        int c = 0;
        fr(i, 0, n) {
            cin in y.increment in y.res;
            if(y.increment == "++i") {
                ++x;
                if(x == y.res) c++;
                else x = y.res;
            }
            else if(y.increment == "i++") {
                if(x == y.res) c++;
                else x = y.res;
                x++;
            }
            else if(y.increment == "--i") {
                --x;
                if(x == y.res) c++;
                else x = y.res;
            }
            else if(y.increment == "i--") {
                if(x == y.res) c++;
                else x = y.res;
                x--;
            }
            else if(y.increment == "i") {
                if(x == y.res) c++;
                else x = y.res;
            }
        }
        cout p c p "\n";
    }
}

int main(){
    fast_io
    solve();    
    return 0;
}