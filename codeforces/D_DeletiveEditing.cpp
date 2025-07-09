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
    int t; cin in t;
    string s, s1;
    while(t--){
        cin in s in s1;
        if(s == s1) cout p "YES\n";
        else{
            vector<char>vl;
            map<char, int>mp;
            fr(i, 0, s1.size()){
                mp[s1.at(i)]++;
            }
            fi(i, s.size(), 0){
                if(find(vl.begin(), vl.end(), s.at(i)) == vl.end() && mp[s.at(i)] == 0){
                    vl.push_back(s.at(i));
                }
                else{
                    if(count(vl.begin(), vl.end(), s.at(i)) < mp[s.at(i)]){
                        vl.push_back(s.at(i));
                    }
                }
            }
            fi(i, vl.size(), 0){
                if(!s1.empty()){
                    if(vl[i] == s1.at(0)){
                        s1.erase(s1.begin());
                    }
                }
                else break;
            }
            if(s1.empty()) cout p "YES\n";
            else cout p "NO\n";
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}