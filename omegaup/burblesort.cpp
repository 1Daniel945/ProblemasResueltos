#include <bits/stdc++.h>
#define fr(i,x,n) for(int i=x; i<n; ++i)
#define in >>
#define p <<
using namespace std;

int main(){
    int nlst;
    int n,aux=0,ct=0,numVerif=0,n1=0,n2=0;
    cin in nlst in n;
    int a[n];
    fr(i,0,n){
        cin in a[i];
    }
    fr(i,0,n-1){
        fr(j,0,n-i-1){
            if(a[j]>a[j+1]){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                ct++; 
                if(ct<10){
                    cout p "(0" p ct p ")" p " .- Se intercambiaron el [" p aux p "] y el [" p a[j] p "].\n";
                }
                else{
                    cout p "(" p ct p ")" p " .- Se intercambiaron el [" p aux p "] y el [" p a[j] p "].\n";
                }
            }
        }
    }
    fr(i,0,n){
        cout p "[" p a[i] p "] ";
    }
    n1 = a[0];
    n2 = a[1];
    cout p "";
    numVerif = nlst*(a[n-1]-(n1+n2));
    cout p "Programa elaborado por el No. lista: [" p nlst p"] con el codigo verificador: [" p numVerif p"]";
}