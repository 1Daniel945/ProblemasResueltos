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
    while(t--){
        int n, m;
        cin in n in m;
        string s;
        vector<string>v;
        fr(i, 0, m){
            cin in s;
            v.push_back(s);
        }
        vector<pair<int, string>>vp, vp1;
        fr(i, 0, v.size()){
            int x = 0;
            fr(j, 0, v[i].size() - 1){
                fr(k, j + 1, v[i].size()){
                    if((v[i].at(j) - 'A') + 1 > (v[i].at(k) - 'A') + 1){
                        x++;
                    }
                }
            }
            vp.push_back({x, v[i]});
        }
        fr(i, 0, vp.size() - 1){
            if(vp[i].first > vp[i + 1].first){
                swap(vp[i].first, vp[i + 1].first);
                swap(vp[i].second, vp[i + 1].second);
            }
        }
        multimap<int, string>mp;
        fr(i, 0, vp.size()){
            mp.insert({vp[i].first , vp[i].second});
        }
        for(auto e : mp){
            cout p e.second p "\n";
        }
        if(t > 0){
            cout p "\n";
        }
    }    
}

int main(){
    fastio
    solve();
    return 0;
}