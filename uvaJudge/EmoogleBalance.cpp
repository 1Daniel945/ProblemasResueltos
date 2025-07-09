#include <bits/stdc++.h>
typedef long long ll;
#define in >>
#define p <<
#define fr(i,x,n)for(ll i=x; i<(int)n; ++i)
using namespace std;

int main(){
    int n;
    int x=0;
    while (cin in n,n!=0){
        int a[n];
        x++;
        int ps=0,ce=0;
        fr(i,0,n){
            cin in a[i];
            if(a[i]>0)ps++;
            else if(a[i]==0)ce++;
        }
        cout p "Case " p x p ": " p ps-ce p"\n";
    }
    return 0;
}

//0 ha dado un premio
//[1-99] motivo por el que emoogole ha dado un premio
//Imprimir numero de veces que da un regalo-cantidad de ceros