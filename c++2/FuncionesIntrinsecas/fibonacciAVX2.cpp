#include<bits/stdc++.h>
#include<immintrin.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int n;
    cout<<("Ingresa la cantidad de terminos a calcular:\n");
    cin>>n;
    __m256 a,b,c;
    float x=10;
    a = _mm256_set1_ps(0);
    printf("%f",a);
    return 0;
}

/*
#include <bits/stdc++.h>
typedef long long ll;
#define fi(x) for(ll i=0; i<x; ++i)
using namespace std;

ll fibonacci(int n) {
    //Crear variables de tipo long long
    ll a=1,b=0,c=0;
    //Ciclo para ir hasta n
    fi(n){
        //Operacion para crear los terminos de fibonacci
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main() {
    unsigned t0,t1;
    t0=clock();
    int n;
    cout<<"ingresa la cantidad de digitos a calcular\n";
    cin>>n;
    //Ciclo para ir hasta n
    fi(n){
        cout<<fibonacci(i)<<"\n";
    }
    t1=clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout<<"Execution time: "<<time<<"\n";
    return 0;
}
*/