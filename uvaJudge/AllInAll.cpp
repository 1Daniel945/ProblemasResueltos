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
    string s, s1;
    while(cin in s in s1){
        if(s1.find(s) != string :: npos){
            cout p "Yes\n";
        }
        else{
            fr(i, 0, s1.size()){
                if(s1.at(i) == s.at(0)){
                    s.erase(s.begin());
                }
                if(s.empty()) break;
            }
            if(s.empty())cout p "Yes\n";
            else cout p "No\n";
        }
    }
}

int main(){
    fastio
    solve();
    return 0;
}