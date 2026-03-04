#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i < (int) n; ++i)
#define fi(i, x, n) for(int i = (int) x - 1; i >= n; --i)
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

void solve() {
    string s, s1;
    map<string, string>mp;
    while(getline(cin, s)) {
        s1 = s.substr(0, 3);
        if(s1 == "000") break;
        mp[s1] = s.substr(3, (int) s.size() - 3);
    }
    double x, outBalance = 0;
    string sequence = "";
    map<string, vector<pair<string, double>>>mp1;
    while(cin in s in x) {
        s1 = s.substr(0, 3);
        if(s1 == "000") break;
        if(sequence.empty()) sequence = s1;
        if(sequence == s1) {
            outBalance += x;
        }
        else {
            if(outBalance != 0) {
                cout p "*** Transaction " p sequence p " is out of balance ***\n";
                for(auto e : mp1) {
                    for(auto e1 : e.ss) {
                        string account = e1.ff.substr(3, 3);
                        string nameAccount = mp[account];
                        double r = e1.ss / 100;
                        cout p account p " " p left p setw(31) p nameAccount p right p setw(10) p fixed p setprecision(2) p r p "\n";
                    }
                }
                cout p "999 " p left p setw(31) p "Out of Balance" p right p setw(10) p fixed p setprecision(2) p (outBalance / 100) * -1 p "\n";
                cout p "\n";
            }
            outBalance = x;
            sequence = s1;
            mp1.clear();
        }
        mp1[sequence].pb({s, x});
    }
    if(outBalance != 0) {
        cout p "*** Transaction " p sequence p " is out of balance ***\n";
        for(auto e : mp1) {
            for(auto e1 : e.ss) {
                string account = e1.ff.substr(3, 3);
                string nameAccount = mp[account];
                double r = e1.ss / 100;
                cout p account p " " p left p setw(31) p nameAccount p right p setw(10) p fixed p setprecision(2) p r p "\n";
            }
        }
        cout p "999 " p left p setw(31) p "Out of Balance" p right p setw(10) p fixed p setprecision(2) p (outBalance / 100) * -1 p "\n";
        cout p "\n";
    }
    outBalance = x;
    sequence = s1;
    mp1.clear();
}

int32_t main() {
    fast_io
    solve();    
    return 0;
}