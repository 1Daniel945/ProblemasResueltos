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
    fastio()
    int n;cin in n;
    if(n<0){
        string s = to_string(n);
        s.erase(s.begin());
        s.erase(s.size()-1);
        int x = stoi(s);
        string s1 = to_string(n);
        s1.erase(s1.begin());
        s1.erase(s1.size()-2,1);
        int y = stoi(s1);
        if(x<y){
            if(x==0)cout p x p "\n";
            else cout p x*-1 p "\n";
        }
        else{
            if(y==0)cout p y p "\n";
            else cout p y*-1 p "\n";
        }
    }
    else{
        cout p n p "\n";
    }
    return 0;
}