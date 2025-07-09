//Codigo SSE
#include<bits/stdc++.h>
#include <ctime>
//Libreria de AVX
#include <immintrin.h>
#pragma GCC target("avx2")
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

float fibo(int n){ 
    /*
    //Crear variable de tipo flotante de 128 bits
    __m128 a,b,c;
    //inicializar vector con 1
    a = _mm_set1_ps(1);
    //incializar todos los elementos del vector con ceros
    //p->packet
    //s->valores de coma flotante
    b = _mm_setzero_ps();
    c = _mm_setzero_ps();
    //Ciclo para hacer el calculo de fibonacci hasta n
    fi(n){
        //Funcion intrinseca para calcular la suma
        c=_mm_add_ps(a,b);
        a=b;
        b=c;
    }
    //Retornar el valor obtenido 
    return c[0];
    */
    __m256 a, b, c;
    a=_mm256_set1_ps(1);
    b=_mm256_setzero_ps();
    c=_mm256_setzero_ps();
    fi(n){
        //Funciones intrinsecas para calcular la suma
        c=_mm256_add_ps(a,b);
        a=b;
        b=c;
    }
    return c[0];
}

int main(){
    unsigned t0,t1;
    t0=clock();
    int n;
    cout<<"ingresa la cantidad de terminos\n";
    cin>>n;
    fi(n){
        //Imprimir el resultado sin decimale debido a que devuelve un valor flotante
        printf("%.0f\n",fibo(i));
    }
    t1=clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout<<"Execution time: "<<time<<"\n";
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