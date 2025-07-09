#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
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

//maximp primero minimo ultimo
int main(){
    fastio();
    string s;cin in s;
    int x=count(s.begin(),s.end(),'1');
    if(s.size()>=2 && x>0){
        //primero quitar los 1 si hay 14 y luego los 144
        while(s.size()>1){
            if(s.at(0)=='1'&&s.at(1)=='1'){
                s.erase(0,1);
            }
            else if(s.size()>1 &&(s.at(0)=='1'&&s.at(1)=='4')){
                if(s.size()>=3 && (s.at(0)=='1'&&s.at(1)=='4'&&s.at(2)=='4')){
                    s.erase(0,3);
                }
                else{
                    s.erase(0,2);
                }
            }
            else{
                break;
            }
        }
        if(s.at(0)=='1'&&s.size()==1){
            s.erase(0,1);
        }
        if(s.empty()){
            cout p "YES\n";
        }
        else{
            cout p "NO\n";
        }
    }
    else{
        if(s.at(0)=='1'){
            cout p "YES\n";
        }
        else{
            cout p "NO\n";
        }
    }
    return 0;
}