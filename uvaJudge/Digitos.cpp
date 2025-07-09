#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
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
    fastio()
    string s;
    while (cin in s, s!="END"){
        if(s.size()==1){
            if(s=="1")cout p "1\n";
            else cout p "2\n";
        }
        else if(s.size()>=2&&s.size()<=9){
            cout p "3\n";
        }   
        else{
            cout p "4\n";
        }
    }
    return 0;
}