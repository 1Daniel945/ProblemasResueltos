#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(name, cover)memset(name, cover,sizeof(name));
using namespace std;

int main(){
    fastio()
    int t;
    cin in t;
    int a, b;
    string s, s1;
    while(t--){
        cin in a in b;
        s = to_string(a);
        s1 = to_string(b);
        bool x = 0, x1 = 0;
        if(s.size() >= s1.size())x1 = 1;
        if(x1){
            fr(i,0,s.size()){
                if(s1.find(s.at(i))!=string::npos){
                    x = 1;
                    break;
                }
            }
        }
        else{
            fr(i,0,s1.size()){
                if(s.find(s1.at(i))!=string::npos){
                    x = 1;
                    break;
                }
            }
        }
        if(x == 1)cout p "SI\n";
        else cout p "NO\n";
    }
    return 0;
}