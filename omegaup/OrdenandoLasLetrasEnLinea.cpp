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
    string s;
    getline(cin, s);
    vector<pair<int, char>>vp;
    string s1 = "";
    fr(i, 0, s.size()){
        if((s.at(i) >= 65 && s.at(i) <= 90) || (s.at(i) >= 97 && s.at(i) <= 122)){
            s1.push_back(s.at(i));
        }
        else{
            vp.push_back({i, s.at(i)});
        }
    }
    sort(s1.begin(), s1.end());
    fr(i, 0, s.size()){
        if(!vp.empty()){
            if(i == vp[0].first){
                cout p vp[0].second;
                vp.erase(vp.begin());
            }
            else{
                cout p s1[0], s1.erase(s1.begin());
            }
        }
        else{
            cout p s1[0], s1.erase(s1.begin());
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}