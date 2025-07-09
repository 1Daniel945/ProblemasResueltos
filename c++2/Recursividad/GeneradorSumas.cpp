#include <bits/stdc++.h>
using namespace std;

int n,k,c=0,v=0;
int arr[100];

void f(int pos, int suma){
    //Condicion de paro
    if(pos==n){
        if(suma==k){
        c++;
        v=c;
        }
        return;
    }
    //Llamadas -> ct f cosas que puedo hacer
    /*
     f(0,0) -> f(1,1)
            -> f(1,0)
    */
    //Si tomas el valor
    f(pos+1, suma+arr[pos]);//->0+1, 0+1 == 1 1
    //Si no tomas el valor
    f(pos+1, suma);
}

int main(){
   cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;
    f(0,0);
    cout<<v<<"\n";
    return 0;
}
