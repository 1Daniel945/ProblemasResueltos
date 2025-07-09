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
    int t;cin in t;
    vp(x);
    fr(i,0,t){
        pair<int,int>pr;
        cin in pr.first in pr.second;
        x.push_back(pr);
    }
    int s=0,s1=0,dismx=0;
    bool one=0,two=0,emp=0;
    fr(i,0,t){
        s+=x[i].first;
        s1+=x[i].second;
        if(s>s1&&one==0&&two==0){
            cout p "Al minuto " p i+1 p " el caballo 1 toma la delantera\n";
            one=1;
        }    
        if(one==1&&emp==0&&s==s1){
            cout p "Al minuto " p i+1 p " los caballos van empatados\n";
        }
        if(s1>s&&one==1&&two==0){
            cout p "Al minuto " p i+1 p " el caballo 2 toma la delantera\n";
            two=1,one=0;
        }
        dismx=max(dismx,abs(s-s1));
    }
    if(s>s1){
        cout p "Termina la carrera y gana el caballo 1\n";
    }
    else if(s1>s)cout p "Termina la carrera y gana el caballo 2\n";
    else cout p "Termina la carrera y empatan los caballos\n";
    cout p "La distancia maxima entre los caballos fue de " p dismx p "\n";
    return 0;
}