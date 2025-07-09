#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    string s;cin in s;
    int c=1;
    while(s.size()>1){
        if(count(s.begin(),s.end(),'0')==s.size())break;
        int r=0;
        fr(i,0,s.size()){
            r=max(r,s.at(i)-'0');
        }
        int x=stoi(s);
        x-=r;
        s=to_string(x);
        c++;
    }
    cout p c p "\n";
    return 0;
}