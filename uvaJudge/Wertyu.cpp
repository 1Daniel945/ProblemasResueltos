#include <bits/stdc++.h>
#define fr(i,x,n)for(ll i=x; i<(ll)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

//Daniel945

int main(){ 
    string s;
    map<char, char>mp = {{'/', '.'}, {'.', ','}, {',', 'M'}, {'M', 'N'}, {'N', 'B'},{'E', 'W'},
    {'B', 'V'}, {'V', 'C'}, {'C', 'X'}, {'X', 'Z'}, {'\'', ';'}, {';', 'L'}, {'L', 'K'},
    {'K', 'J'}, {'J', 'H'}, {'H', 'G'}, {'G', 'F'}, {'F', 'D'}, {'D', 'S'}, 
    {'S', 'A'}, {'A', '\\'}, {'\\', ']'}, {']', '['}, {'[', 'P'}, {'P', 'O'}, {'O', 'I'},
    {'I', 'U'}, {'U', 'Y'}, {'Y', 'T'}, {'T', 'R'}, {'R', 'E'}, {'W', 'Q'}, {'W', 'Q'},
    {'1', '`'}, {'2', '1'}, {'3', '2'}, {'4', '3'}, {'5', '4'}, {'6', '5'}, {'7', '6'}, {'8', '7'}, {'9', '8'}, {'0', '9'},
    {'=', '-'}, {'-', '0'}};
    while(getline(cin, s)){
        string s1 = "";
        fr(i, 0, s.size()){
            if(s.at(i) == 32){
                s1+=" ";
            }
            else s1 += mp[s.at(i)];
        }
        cout p s1 p "\n";
    }
    return 0;
}