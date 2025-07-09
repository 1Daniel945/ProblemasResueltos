#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define lsb(x) ((x) & -(x)) //less significative bit
#define out (i == 3 - 1 ? "\n" : " ")
typedef long long ll;
using namespace std;

void solve(){
    string s; cin in s;
    int x = 0;
    fr(i, 0, s.size()) if(s[i] == '7' || s[i] == '4') x++;
    if(x > 0){
        if(s[0] == '0'){
            while(s[0] == '0') s.erase(s.begin());
        }
        string s1 = "";
        vector<string>allSub;
        fr(i, 0, s.size()){
            if(s.at(i) == '4' || s.at(i) == '7'){
                fr(j, i, s.size()){
                    if(s[j] != '4' && s[j] != '7') break;
                    s1 += s[j];
                }
                if(s1 != "7" && s1 != "4") allSub.push_back(s1);
                s1 = "";
            }
        }
        map<string, int>mp;
        int mx = 0;
        for(auto e : allSub){
            int c = 0, ps = 0;
            while ((ps = s.find(e, ps)) != string::npos) {
                c++;
                ps += e.size();            
            }    
            mp[e] = c;
            mx = max(mx, c);
        }
        mp["7"] = count(s.begin(), s.end(), '7');
        mp["4"] = count(s.begin(), s.end(), '4');
        mx = max({ mx, mp["7"], mp["4"] });
        set<string>st;
        for(auto e : mp){
            if(e.ss == mx) st.insert(e.ff);
        }
        cout p *st.begin() p "\n";
    }
    else cout p "-1\n";
}
int main(){
    fast_io
    solve();
    return 0;
}