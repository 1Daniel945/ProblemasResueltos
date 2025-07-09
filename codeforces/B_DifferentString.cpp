#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    fastio();
    int t;cin >> t;
    string s,s2;
    while(t--){
        cin in s;
        int c=count(s.begin(),s.end(),s.at(0));
        if(c==s.size())cout p "NO\n";
        else{
            s2=s;
            for(int i=1; i<(int)s.size(); ++i){
                if(s2.at(i)==s.at(i)){
                    swap(s2.at(0),s2.at(i-1));
                }
            }
            if(s==s2){
                swap(s2.at(0),s2.at(s2.size()-1));
            }
            if(s!=s2)cout p "YES\n" p s2 p "\n";
            else cout p "NO\n";
        }
    }
    return 0;
}