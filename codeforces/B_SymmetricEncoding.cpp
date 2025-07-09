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
        vector<char>lt;
        fr(i, 0, s.size()){
            if(find(lt.begin(), lt.end(), s.at(i)) == lt.end()){
                lt.push_back(s.at(i));
            }
        }
        sort(lt.begin(), lt.end());
        map<char, char>mp;
        fr(i, 0, lt.size()){
            mp[lt[i]] = lt[lt.size() - 1 - i];
        }
        fr(i, 0, s.size()) cout p mp[s.at(i)];
        cout p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}