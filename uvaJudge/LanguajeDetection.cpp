#include <bits/stdc++.h>
typedef long long ll;
#define rt0 return 0;
#define wh(x)while(x--)
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define vi(v) vector<int>v; 
#define psi(t,x) for(pair<string,int>t:x)
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){
    string s;
    int c=0;
    while (cin in s,s!="#"){
        c++;
        if(s=="HELLO"){
            cout p "Case " p c p ": ENGLISH\n";
        }
        else if(s=="HOLA"){
            cout p "Case " p c p ": SPANISH\n";
        }
        else if(s=="HALLO"){
            cout p "Case " p c p ": GERMAN\n";
        }
        else if(s=="BONJOUR"){
            cout p "Case " p c p ": FRENCH\n";
        }
        else if(s=="CIAO"){
            cout p "Case " p c p ": ITALIAN\n";
        }
        else if(s=="ZDRAVSTVUJTE"){
            cout p "Case " p c p ": RUSSIAN\n";
        }
        else{
            cout p "Case " p c p ": UNKNOWN\n";
        }
    }
    rt0;
}