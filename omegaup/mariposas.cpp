#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    vp(x);
    int a,b;
    fi(i,0,3){
        cin in a in b;
        x.push_back({a,b});
    }
    //Tomar distancia
    int d1,d2,df1,d3,d4,df2;
    d1 = pow((x[1].first-x[0].first),2);
    d2 = pow((x[1].second-x[0].second),2);
    df1= d1+d2;
    d3 = pow((x[2].first-x[1].first),2);
    d4 = pow((x[2].second-x[1].second),2);
    df2=d3+d4;
    if(df1!=df2){
        cout p "SI\n";
    }
    else{
        cout p "NO\n";
    }
    return 0;
}
