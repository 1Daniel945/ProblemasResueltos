#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fadd(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    while(!s1.empty()){
        if(s.find(s1.back())!=string::npos)s.at(s.find(s1.back()))=' ',s1.pop_back();
        else break;
    }
    int sp = count(s1.begin(),s1.end(),' ');
    if(sp==(int)s1.size())cout p "YES\n";
    else cout p "NO\n";
    return 0;
}