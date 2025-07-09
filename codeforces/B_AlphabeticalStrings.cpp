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
typedef long long ll;
using namespace std;

void solve(){
    int t; cin in t;
    string s, s1, s2;
    while(t--){
        cin in s;
        if(s == "a") cout p "YES\n";
        else{
            s1 = s;
            s2 = "";
            sort(s1.begin(), s1.end());
            fr(i, 0, s.size()) s2 += 'a' + i;
            if(s1 == s2){
                bool isT = 0;
                sort(s1.begin(), s1.end());
                fr(i, 0, s.size() - 1){
                    if(s1.at(i) == s1.at(i + 1)){
                        isT = 1;
                        break;
                    }
                }
                if(isT == 1) cout p "NO\n";
                else{
                    bool isA = 0;
                    fr(i, 0, s.size() - 1){
                        if(s.at(i) != 'a' && isA == 0){
                            if(s.at(i) < s.at(i + 1)){
                                isT = 1;
                                break;
                            }
                        }
                        else if(s.at(i) != 'a' && isA == 1){
                            if(s.at(i) > s.at(i + 1)){
                                isT = 1;
                                break;
                            }
                        }
                        else if(isA == 0) isA = 1;
                    }
                    isT == 1 ? cout p "NO\n" : cout p "YES\n";
                }
            }
            else cout p "NO\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0;
}

//abcdefghi