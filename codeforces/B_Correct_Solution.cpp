#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb push_back
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;

void solve(){
    string s, s1, s2, s3 = "";
    cin in s in s1;
    if(s.size() == 1 && s1.size() == 1){
        s == s1 ? cout p "OK\n" : cout p "WRONG_ANSWER\n";
    }
    else{
        s2 = s;
        sort(s2.begin(), s2.end());
        if(s2.find('0') != string::npos){
            if(s2.find_last_of('0') + 1 < s2.size()){
                int ps = s2.find_last_of('0') + 1;
                char c = s2[ps];
                s2.erase(ps, 1);
                s3 = c + s2;
            }
        }
        else s3 = s2;
        s3 == s1 ? cout p "OK\n" : cout p "WRONG_ANSWER\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}