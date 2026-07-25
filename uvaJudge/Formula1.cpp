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
#define tab "\t"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

void Formula1() {
    int n; 
    string s, s1, name;
    while(cin in n, n != 0) {
        cin.ignore();
        map<int, multiset<pair<string, int>>>mp;
        vector<string>originalNames;
        fr(k, 0, n) {
            getline(cin, s);
            stringstream ss(s);
            double mnSec = -1, sec = -1, misSec = -1;
            bool b = 0;
            while(ss >> s1) {
                if(!b) {
                    name = s1;
                    originalNames.pb(name);
                    b = 1;
                }
                if(isdigit(s1[0]) && mnSec == -1) {
                    mnSec = (stod(s1) * 60);
                }
                else if(isdigit(s1[0]) && sec == -1) {
                    sec = stod(s1);
                }
                else if(isdigit(s1[0]) && misSec == -1) {
                    misSec = (stod(s1) / 1000);
                }
            }
            if(0 > mnSec) mnSec = 0;
            if(0 > sec) sec = 0;
            if(0 > misSec) misSec = 0;
            double ans = mnSec + sec + misSec;
            string x = to_string((int) (ans * 1000)), x1;
            fr(i, 0, x.size()) if(x[i] != '.') x1.pb(x[i]);
            fr(i, 0, name.size()) name[i] = tolower(name[i]);
            mp[stoi(x1)].insert({name, originalNames.size() - 1});
        }
        int rows = 1, c = 0;
        for(auto names : mp) {
            for(auto e : names.ss) {
                if(c % 2 == 0) cout p "Row " p rows p "\n", rows++;
                cout p originalNames[e.ss] p  "\n";
                c++;
            }
        }
        cout p "\n";
    }
}

int32_t main() {
    fast_io
    Formula1();    
    return 0;
}  