#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
typedef long long db;
using namespace std;

int main(){
    fastio()
    int n;cin in n;
    vp(x);
    mps(int,int,mp);
    int a,b;
    fr(i,0,n){
        cin in a in b;
        x.push_back({a,b});
        mp[i]=a;
    }
    //Encontrar la distancia maxima
    fr(i,0,x.size()){
        db mx=0;
        int ps=0;
        fr(j,0,x.size()){
            if(i!=j){
                db d=sqrt((pow(x[i].first-x[j].first,2))+(pow(x[i].second-x[j].second,2)));
                if(d>=mx)mx=d,ps=j;
            }
        }
        cout p ps+1 p"\n";
    }
    return 0;
}

/*
    sqrt((x1-x2)^2+(y1-y2)^2);
    0 0
    1 sqrt((0-2)^2+(0-4)^2) = 4.47
    2 sqrt((0-5)^2+(0-0)^2) = 5
    3 sqrt((0-3)^2+(0-4)^2) =   

*/