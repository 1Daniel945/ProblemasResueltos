#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    fastio(); 
    int a,b; 
    string s;
    cin in s in a in b;
    int x=(s.size())/2;
    if(s.size()%2==0)x++;
    bool t=0;
    ll first=0;
    fr(i,0,x-1){
        if(s.at(i)-'0'>s.at(i+1)-'0'){
            t=1;
            break;
        }
    }
    //Compara si el numero de la izquierda es menor
    if(s.at(x-1)-'0'>=s.at(x)-'0')t=1;
    //Compara si el numero de la derecha es menor
    if(s.at(x+1)-'0'>=s.at(x)-'0')t=1;
    if(t==0){
        fr(i,x+1,s.size()-1){
            if(s.at(i)-'0'<s.at(i+1)-'0'){
                t=1;
                break;
            }
        }
    }
    if(t==0)cout p "es escalera inicialmente\n";
    else{
        //hacer el primer proceso
        ll n = stoll(s);
        first = n;
        n-=a;
        n/=(b+1);
        s=to_string(n);
        if(s.size()%2==0)x++;
        x=(s.size())/2;
        bool t=0;
        fr(i,0,x-1){
            if(s.at(i)-'0'>=s.at(i+1)-'0'){
                t=1;
                break;
            }
        }
        //Compara si el numero de la izquierda es menor
        if(s.at(x-1)-'0'>=s.at(x)-'0')t=1;
        //Compara si el numero de la derecha es menor
        if(s.at(x+1)-'0'>=s.at(x)-'0')t=1;
        if(t==0){
            fr(i,x+1,s.size()-1){
                if(s.at(i)-'0'<=s.at(i+1)-'0'){
                    t=1;
                    break;
                }
            }
        }
        if(t==0)cout p "es escalera despues del primer intento\n";
        else{
            ll n = (first-(a+b))+1;
            s=to_string(n);
            x=(s.size())/2;
            if(s.size()%2==0)x++;
            bool t=0;
            fr(i,0,x-1){
                if(s.at(i)-'0'>s.at(i+1)-'0'){
                    t=1;
                    break;
                }
            }
            //Compara si el numero de la izquierda es menor
            if(s.at(x-1)-'0'>=s.at(x)-'0')t=1;
            //Compara si el numero de la derecha es menor
            if(s.at(x+1)-'0'>=s.at(x)-'0')t=1;
            if(t==0){
                fr(i,x+1,s.size()-1){
                    if(s.at(i)-'0'<=s.at(i+1)-'0'){
                        t=1;
                        break;
                    }
                }
            }
            if(t==0)cout p "es escalera despues del segundo intento\n";
            else cout p "nos rendimos\n";           
        }
    }
    return 0;
}