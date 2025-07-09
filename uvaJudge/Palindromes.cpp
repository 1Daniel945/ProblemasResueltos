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
#define out(i, n) (i == (int) n - 1 ? "\n" : "\n\n")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;

void solve(){
    string s, s1, s2;
    map<char, char>mp = {
        {'A', 'A'}, {'3', 'E'}, {'H', 'H'}, {'I', 'I'}, {'L', 'J'},
        {'J', 'L'}, {'M', 'M'}, {'O', 'O'}, {'O', '0'}, {'2', 'S'},
        {'T', 'T'}, {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'},
        {'Y', 'Y'}, {'5', 'Z'}, {'1', '1'}, {'S', '2'}, {'E', '3'},
        {'Z', '5'}, {'8', '8'}     
    };
    vector<string>vs;
    while(cin in s){
        bool isM = 0, isR = 0;
        s1 = "", s2 = "";
        s1 = s;
        reverse(s1.begin(), s1.end());
        if(s1 == s) isR = 1;
        fr(i, 0, s.size()){
            if(mp[s[i]]) s2 += mp[s[i]];
        }
        s1 = "";
        s1 = s2;
        reverse(s1.begin(), s1.end());
        s2 = "";
        if(s1 == s) isM = 1;
        if(isR == 1 && isM == 1){
            s2 = s;
            s2 += " -- is a mirrored palindrome.";
        } 
        else if(isR == 0 && isM == 1){
            s2 = s;
            s2 += " -- is a mirrored string.";
        }
        else if(isR == 1 && isM == 0){
            s2 = s;
            s2 += " -- is a regular palindrome.";
        }
        else s2 = s, s2 += " -- is not a palindrome.";
        vs.pb(s2);
    }
    fr(i, 0, vs.size()){
        cout p vs[i] p "\n\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}