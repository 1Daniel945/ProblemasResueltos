#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    string s, s1;
    while(t--){
        cin in s;
        s1 = "";
        vector<int>psL, psU;
        fr(i, 0, s.size()){
            if(s.at(i) != 'b' && s.at(i) != 'B'){
                s1 += s.at(i);
                if(isupper(s.at(i))){
                    psU.push_back(s1.size());
                }
                else psL.push_back(s1.size());
            }
            else{
                if(s.at(i) == 'B' && !psU.empty()){
                    s1.at(psU[psU.size() - 1] - 1) = '$';
                    psU.pop_back();
                }
                else if(s.at(i) == 'b' && !psL.empty()){
                    s1.at(psL[psL.size() - 1] - 1) = '$';
                    psL.pop_back();
                }
            }
        }
        string s2 = "";
        fr(i, 0, s1.size()) if(s1.at(i) != '$') s2 += s1.at(i);
        cout p s2 p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}