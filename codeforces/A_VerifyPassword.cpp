#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

void solve(){
    int t, n; cin in t;
    string s;
    while(t--){
        cin in n in s;
        bool isT = 0;
        vector<int>a;
        vector<char>letter;
        fr(i, 0, s.size()){
            if((s.at(i) >= 97 && s.at(i) <= 122) || (s.at(i) >= 48 && s.at(i) <= 57)){
                //Lowercase
                if(s.at(i) >= 65 && s.at(i) <= 122){
                    if(i + 1 < (int) s.size()){
                        //number
                        if(s.at(i + 1) >= 48 && s.at(i + 1) <= 57){
                            isT = 1;
                            break;
                        }
                    }
                    letter.push_back(s.at(i));
                }
                else a.push_back(s.at(i) - '0');
            }
            else{
                isT = 1;
                break;
            }
        }
        !is_sorted(letter.begin(), letter.end()) ? isT = 1 : isT;
        !is_sorted(a.begin(), a.end()) ? isT = 1 : isT;
        !isT ? cout p "YES\n" : cout p "NO\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}