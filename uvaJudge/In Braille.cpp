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
    int d;
    char c;
    string s, out = "";
    while(cin in d){
        if(d == 0) break;
        cin in c;
        int ps = 0;
        char mt[3][(d * 2) + (d - 1)];
        memset(mt, ' ', sizeof(mt));
        if(c == 'S'){
            cin in s;
            fr(i, 0, s.size()){
                if(s.at(i) == '0'){
                    mt[0][ps] = '.';
                    mt[0][ps + 1] = '*';
                    mt[1][ps] = '*';
                    mt[1][ps + 1] = '*';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '1'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '.';
                    mt[1][ps] = '.';
                    mt[1][ps + 1] = '.';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '2'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '.';
                    mt[1][ps] = '*';
                    mt[1][ps + 1] = '.';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '3'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '*';
                    mt[1][ps] = '.';
                    mt[1][ps + 1] = '.';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '4'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '*';
                    mt[1][ps] = '.';
                    mt[1][ps + 1] = '*';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '5'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '.';
                    mt[1][ps] = '.';
                    mt[1][ps + 1] = '*';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '6'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '*';
                    mt[1][ps] = '*';
                    mt[1][ps + 1] = '.';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '7'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '*';
                    mt[1][ps] = '*';
                    mt[1][ps + 1] = '*';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '8'){
                    mt[0][ps] = '*';
                    mt[0][ps + 1] = '.';
                    mt[1][ps] = '*';
                    mt[1][ps + 1] = '*';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                else if(s.at(i) == '9'){
                    mt[0][ps] = '.';
                    mt[0][ps + 1] = '*';
                    mt[1][ps] = '*';
                    mt[1][ps + 1] = '.';
                    mt[2][ps] = '.';
                    mt[2][ps + 1] = '.';
                }
                ps += 3;
            }
            fr(i, 0, 3){
                fr(j, 0, (d * 2) + (d - 1)){
                    cout p mt[i][j];
                }
                cout p "\n";
            }
        }
        else{
            out.clear();
            cin.ignore();
            vector<string>vs;
            fr(i, 0, 3){
                getline(cin, s);
                vs.push_back(s);
            }
            int ps = 0;
            fr(i, 0, d){
                //Cero
                if(vs[0].at(ps) == '.' && vs[0].at(ps + 1) == '*' && vs[1].at(ps) == '*' && vs[1].at(ps + 1) == '*' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '0';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '.' && vs[1].at(ps) == '.' && vs[1].at(ps + 1) == '.' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '1';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '.' && vs[1].at(ps) == '*' && vs[1].at(ps + 1) == '.' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '2';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '*' && vs[1].at(ps) == '.' && vs[1].at(ps + 1) == '.' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '3';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '*' && vs[1].at(ps) == '.' && vs[1].at(ps + 1) == '*' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '4';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '.' && vs[1].at(ps) == '.' && vs[1].at(ps + 1) == '*' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '5';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '*' && vs[1].at(ps) == '*' && vs[1].at(ps + 1) == '.' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '6';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '*' && vs[1].at(ps) == '*' && vs[1].at(ps + 1) == '*' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '7';
                }
                else if(vs[0].at(ps) == '*' && vs[0].at(ps + 1) == '.' && vs[1].at(ps) == '*' && vs[1].at(ps + 1) == '*' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '8';
                }
                else if(vs[0].at(ps) == '.' && vs[0].at(ps + 1) == '*' && vs[1].at(ps) == '*' && vs[1].at(ps + 1) == '.' && vs[2].at(ps) == '.' && vs[2].at(ps + 1) == '.'){
                    out += '9';
                }
                ps += 3;
            }
            cout p out p "\n";
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}