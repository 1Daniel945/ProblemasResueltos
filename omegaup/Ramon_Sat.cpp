#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    int n;
    string s;
    map<string,int>mp={{"goku", 50}, {"vegeta", 40}, {"krilin", 1}, {"freezer", 20}, {"bulma", 200}};
    int sm=0;
    while(cin in n){
        cin in s;
        if(s.at(s.size()-1)=='s'){
            s.erase(s.size()-1);
        }
        sm+=(mp[s]*n);
    }
    cout p "Total de ingresos :" p sm p "\n";
    cout p "Multa del SAT: " p sm*3 p "\n";
    cout p "_______________________________\n";
    cout p "Deuda: " p (sm*3)-(sm) p "\n";
}