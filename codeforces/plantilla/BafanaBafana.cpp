#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    string s, s2;
    ofstream ar;
    ar.open("a.txt");
    map<char, char>mp = {{'E', '3'}, {'J', 'L'}, {'L','K'}, {'S', '2'}, {'Z', '5'}, {'2', 'S'}, {'3', 'E'}, {'5', 'Z'}};
    vector<char>rs = {'E', 'J',  'L', 'S', 'Z', '2' , '3', '5'};
    vector<string>out;
    while(cin in s){
        bool isPalindrome = 0, isMirroredString = 0;
        string s1 = s;
        reverse(s1.begin(), s1.end());
        if(s1 == s) isPalindrome = 1;
        fr(i, 0, s.size()){
            if(find(rs.begin(), rs.end(), s.at(i)) != rs.end()){
                s2 += mp[s.at(i)];
            }
            else if(s.at(i) == 'A' || s.at(i) == 'H' || s.at(i) == 'I' || 
            s.at(i) == 'M' || s.at(i) == 'T' || s.at(i) == 'U' || s.at(i) == 'V' 
            || s.at(i) == 'W' || s.at(i) == 'X' || s.at(i) == 'Y' || s.at(i) == '1' || s.at(i) == '8' || s.at(i) == 'O'){
                s2 += s.at(i);
            }
        }
        reverse(s2.begin(), s2.end());
        string s3 = s2;
        if(s2.size() == s.size()){    
            int x = 0;
            fr(i, 0, s.size()){
                if(s.at(i) == s2.at(i)){
                    x++;
                }
                else{
                    if(find(rs.begin(), rs.end(), s.at(i)) != rs.end()){
                        if(s2.at(i) == mp[s.at(i)]) x++;
                    }
                }
            }
            cout p x p " " p s.size() p "\n";
            if(x >= (int) s.size() / 2) isMirroredString = 1;
        }
        if(s2 == s) isMirroredString = 1;
        fi(i, s.size(), 0){
            if(s2.empty()) break;
            if(s2.at(s2.size() - 1) == s.at(i)){
                s2.erase(s2.size() - 1, 1);
            }
        }
        if(s2.empty()) isMirroredString = 1;
        cout p isMirroredString p "\n";
        if(isPalindrome == 0) ar p s p " -- is not a palindrome.\n";
        else if(isPalindrome == 1 && isMirroredString == 0) ar p s p " -- is a regular palindrome.\n";
        else if(isPalindrome == 0 && isMirroredString == 1) ar p s p " -- is a mirrored string.\n";
        else ar p s p " -- is a mirrored palindrome.\n";
        s2 = "";
        ar p "\n";
    }
    ar.close();
}

int main() {
    fastio
    solve();
    return 0;
}