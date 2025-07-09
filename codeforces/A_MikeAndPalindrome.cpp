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
    fastio()
    string s;cin in s;
    string s1=s;
    reverse(s1.begin(),s1.end());
    int df=0;
    fr(i,0,s.size()){
        if(s.at(i)!=s1.at(i))df++;
    }
    if(df==2)cout p "YES\n";
    else{
        if(s.size()%2==1){
            int mt=s.size()/2;
            s.erase(mt,1);
            s1.erase(mt,1);
            if(s==s1)cout p "YES\n";
            else cout p "NO\n";
        }
        else cout p "NO\n";
    }
    return 0;
}