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
    vector<pair<string, int>>psi(t);
    int mx = 0; string s = "";
    map<string, int>mp, mp1;
    vector<string>winners;
    fr(i, 0, t){
        cin in psi[i].first in psi[i].second;
        mp[psi[i].first] = 0;
        mp1[psi[i].first] = 0;
    }
    vector<string>names;
    fr(i, 0, t){
        if(find(names.begin(), names.end(), psi[i].first) == names.end()){
            names.push_back(psi[i].first);
        }
        mp[psi[i].first] += psi[i].second;
    }
    fr(i, 0, names.size()){
        if(mp[names[i]] > mx){
            mx = mp[names[i]];
        }  
    }
    fr(i, 0, names.size()){
        if(mp[names[i]] == mx){
            winners.push_back(names[i]);
        }
    }
    //Get Winner
    fr(i, 0, t){
        if(find(winners.begin(), winners.end(), psi[i].first) != winners.end()){
            mp1[psi[i].first] += psi[i].second;
            if(mp1[psi[i].first] >= mx){
                s = psi[i].first;
                break;
            }
        }
    }
    cout p s p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}