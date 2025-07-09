#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    string s, s1;
    cin.ignore();
    while(t--){
        getline(cin, s);
        getline(cin, s1);
        char mt[5][5];
        memset(mt, ' ', sizeof(mt));
        map<char, bool>mp;
        fr(i, 0, 26) mp[(char)('A' + i)] = 0;
        int i = 0, j = 0;
        fr(x, 0, s.size()){
            if(s[x] != ' '){
                if(j < 5){
                    if(mp[toupper(s[x])] == 0){
                        mp[toupper(s[x])] = 1;
                        mt[i][j] = toupper(s[x]);
                        j++;
                    }
                }
                else j = 0, i++;
            }   
        }
        char c;
        fr(x, 0, 26){
            c = (char) ('A' + x);
            if(mp[c] == 0 && c != 'Q'){ 
                if(j < 5){
                    mp[c] = 1;
                    mt[i][j] = c;
                    j++;
                }
                else {
                    j = 0, i++;
                    mp[c] = 1;
                    mt[i][j] = c;
                    j++;
                }
            }
            if(i == 5) break;
        }
        string s2 = "";
        vector<string>vs;
        fr(i, 0, s1.size()){
            if(s1[i] != ' ') s2 += toupper(s1[i]);
            if(s2.size() == 2){
                vs.push_back(s2);
                s2 = "";
            }
        }
        if(!s2.empty()) vs.push_back(s2);
        fr(i, 0, vs.size()){
            if(vs[i].size() == 2){
                if(vs[i][0] == vs[i][1]){
                    vs[i].insert(vs[i].begin() + 1, 'X');
                }   
            }
            else if(vs[i].size() == 1){
                vs[i] += 'X';
            }
            cout p vs[i] p " ";
        }
        cout p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}

/*
    int t; cin in t;
    string s;
    while(t--){
        cin in s;
        char c;
        int mn = 90;
        fr(i, 0, s.size()){
            if(s.at(i) < mn){
                mn = s.at(i);
                c = s.at(i);
            }
        }
        int firstA;
        fr(i, 0, s.size()){
            if(s[i] == c){
                firstA = i;
                break;
            }
        }
        int split;
        fr(i, firstA + 1, s.size()){
            if(s[i] == c){
                split = i ;
                break;
            }
        }
        int x = s.size() - split;
        cout p x p "\n";
    }
*/