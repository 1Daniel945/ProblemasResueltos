#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    string s, s1, s2;
    while(t--){
        cin in s;
        int x = 0;
        if(count(s.begin(), s.end(), 'B') == 0){
            x = s.size();
            cout p x p "\n";
        }
        else{
            s1 = "";
            fr(i, 0, s.size()){
                if(s1.empty()) s1 += s[i];
                else{
                    if(s1[s1.size() - 1] == 'A' && s[i] == 'B'){
                        s1.pop_back();
                    }
                    else s1 += s[i];
                }
            }
            s2 = "";
            fr(i, 0, s1.size()){
                if(s2.empty()) s2 += s1[i];
                else{
                    if(s2[s2.size() - 1] == 'B' && s1[i] == 'B'){
                        s2.pop_back();
                    }
                    else s2 += s1[i];
                }
            }
            x = s2.size();
            cout p x p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}