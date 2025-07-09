#include <bits/stdc++.h>
//Never say "I can't" without trying
typedef long long ll;
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
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin in t;
    wh(t){
        int a[4];
        fi(0,4)cin in a[i];
        int b[4];
        //Quien pasa a la final
        if(a[0]>=a[1]){
            b[0]=a[0];
        }
        if(a[1]>=a[0]){
            b[0]=a[1];
        }
        if(a[2]>=a[3]){
            b[1]=a[2];
        }
        if(a[3]>=a[2]){
            b[1]=a[3];
        }
        sort(a,a+4);
        //Dos valores maximos
        b[2]=a[2];
        b[3]=a[3];
        if((b[0]==a[2]&&b[1]==a[3])||(b[0]==a[3]&&b[1]==a[2])){
            yesNo(1,1);
        }
        else{
            yesNo(2,3);
        }
    }
    rt0;
}