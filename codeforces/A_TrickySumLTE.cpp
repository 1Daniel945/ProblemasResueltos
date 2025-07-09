#include <bits/stdc++.h>
//Never say "I can't" without trying
typedef long long ll;
typedef unsigned long long ull;
#define rt0 return 0;
#define wh(x)while(x--)
#define fi(x,n)for(int i=x; i<n; ++i)
#define fj(x,n)for(int j=x; j<n; ++j)
#define fk(x)for(int k=0; k<x; ++k)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define vi(v) vector<int>v; 
#define psi(t,x) for(pair<string,int>t:x)
#define yesNo(x,y) x==y?cout p "YES\n": cout p "NO\n";
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio();
    int t,n;cin in t;
    wh(t){
        cin in n;
        ll s=0;
        fi(1,n+1){
            //Operador & sirve para comparar a bit a bit
            int x = i&i-1;
            if(x==0){
                s+=i*-1;
            }
            else{
                s+=i;
            }
        }
        cout p s p "\n";
    }
    rt0;
}