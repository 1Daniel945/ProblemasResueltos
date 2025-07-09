#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
using namespace std;

int main(){
    fastio()
    int t;cin in t;
    vector<string>vs;
    string s,s1;
    vector<pair<string,string>>vsp;
    fr(i,0,t-1)cin in s in s1,vsp.push_back({s,s1});
    sort(vsp.begin(),vsp.end());
    fr(i,0,vsp.size()){
        if(vs.size()==0)vs.push_back(vsp[i].second),vs.push_back(vsp[i].first);
        else{
            if(find(vs.begin(),vs.end(),vsp[i].first)!=vs.end()){
                vs.insert(find(vs.begin(),vs.end(),vsp[i].first),vsp[i].second);
            }
            else if(find(vs.begin(),vs.end(),vsp[i].first)==vs.end()){
                vs.push_back(vsp[i].first);
            }
        }
    }
    fr(i,0,vs.size()){
        cout p vs[i] p "\n";
    }
}


