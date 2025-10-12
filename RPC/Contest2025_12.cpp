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
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void solveE(){
    int n; cin in n;
    char mt[2][n];
    fr(i, 0, 2){
        fr(j, 0, n){
            cin in mt[i][j];
        }
    }
    string s = "";
    int x1 = 0;
    fr(i, 0, 1){
        int x = 0;
        fr(j, 0, n){
            if(mt[i][j] == '.' && mt[i][j - 1] == '/'){
                if(x == 4){
                    s += "v";
                    x = 0;
                }
                else if(x == 8){
                    s += 'w';
                    x = 0;
                }
            }
            else {
                x++;
                x1 = x;
            }
        }
    }
    if(x1 == 8) s += 'w';
    else if(x1 == 4) s += 'v';
    cout p s p "\n";
}

void solveD(){
    string s, s1 = "", s2 = "";
    cin in s;
    map<char, int>mp;
    fr(i, 0, s.size()){
        mp[s[i]]++;
    }
    int x;
    for(auto e : mp){
        x = 0;
        if(e.ss > 1){
            while(e.ss > 0){
                if(x % 2 == 0) s1 += e.ff;
                else s2 += e.ff;
                x++;
                e.ss--;
            }
        }
    }
    for(auto e : mp){
        if(e.ss == 1) s1 += e.ff;
    }
    reverse(s2.begin(), s2.end());
    s = s1 + s2;
    s2 = s;
    reverse(s.begin(), s.end());
    s2 == s ? cout p "yes\n" : cout p "no\n";
}

void solveK(){
    int n, m;
    cin in n in m;
    if(n == m) cout p n p "\n";
    else if(n > m) cout p "0\n";
    else{
        int x = abs(n - m);
        x = abs(m - x) + 1;
        cout p x p "\n";
    }
}

int main(){
    fast_io
    solveD();
    return 0;
}