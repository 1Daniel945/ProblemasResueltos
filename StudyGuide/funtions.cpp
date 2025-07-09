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

int n;
vector<int>subset;

//Busqueda completa
void search(int k){
    if(k==n)return;
    else {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

int main(){
    fastio();
    //Pendiente buscar su funcionamiento
    hypot(10.5, 11.2);
    //Crear arreglo binario menos memoria
    bitset<10>b;
    /*
        Metodo para generar todos los subset de un arreglo
        usando desplazamiento de bits
    */
    for(int b = 0; b<(1 << n); ++b){
        vector<int>subset1;
        for(int i = 0; i<n; ++i){
            if(b & (1 << i)) subset1.push_back(i);
        }
    }
    //Funcioes para contear bits
    __builtin_clz(10);//numero de ceros al inicio 
    __builtin_ctz(10);//numero de ceros al final
    __builtin_popcount(10);//el numero de 1 en el numero
    __builtin_parity(10);//si la cantidad de cero es par o impar
    return 0;
}