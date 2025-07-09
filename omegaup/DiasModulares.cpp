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

int main(){
    fastio()
    int t;cin in t;
    string s;
    int ad=0;
    map<string,int>mp;
    mp["LUNES"]=0;
    mp["MARTES"]=1;
    mp["MIERCOLES"]=2;
    mp["JUEVES"]=3;
    mp["VIERNES"]=4;
    mp["SABADO"]=5;
    mp["DOMINGO"]=6;
    map<int,string>mp1;
    mp1[0]="LUNES";
    mp1[1]="MARTES";
    mp1[2]="MIERCOLES";
    mp1[3]="JUEVES";
    mp1[4]="VIERNES";
    mp1[5]="SABADO";
    mp1[6]="DOMINGO";
    while(t--){
        cin in s in ad;
        ad+=mp[s];
        ad%=7;
        cout p mp1[ad] p "\n"; 
    }
    return 0;
}