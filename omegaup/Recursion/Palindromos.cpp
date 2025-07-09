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

int c=0;

void recorrer(string &s, int i){
    if(s.at(i)!=s.at(s.size()-1-i))return; 
    c++;
    if(i+1<=(int)s.size()-1)recorrer(s, i+=1); 
    else return;
}

int main(){
    fastio()
    string s;
    cin in s;
    recorrer(s,0);
    if(c==(int)s.size())cout p "Si\n";
    else cout p "No\n";
    return 0;
}