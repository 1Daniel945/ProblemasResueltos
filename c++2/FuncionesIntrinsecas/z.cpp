//Codigo SSE
#include<bits/stdc++.h>
#include <immintrin.h>
#define fi(x) for(int i=0; i<x; ++i)
typedef long long ll;
using namespace std;

float fibo(int n){ 
	//Crear variable de tipo flotante
	__m128 a,b,c;
	//inicializar vector con 1
	a = _mm_set1_ps(1);
	//incializar vectores b y c con cero
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
}
	
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

int main(){
	int n;
	cout<<"ingresa los terminos: \n";
	cin>>n;
	unsigned t2,t3;
	t2=clock();
	//Ciclo para ir hasta n
	fi(n){
		cout<<fibonacci(i)<<"\n";
	}
	t3=clock();
    double time2 = (double(t3-t2)/CLOCKS_PER_SEC);
    cout<<"Execution time 1: "<<time2<<"\n";
	unsigned t0,t1;
    t0=clock();
	fi(n){
		//Imprimir el resultado sin decimale debido a que devuelve un valor flotante
		printf("%.0f\n",fibo(i));
	}
	t1=clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout<<"Execution time 2: "<<time<<"\n";
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
		int n;
		cout<<"ingresa la cantidad de digitos a calcular\n";
		cin>>n;
		//Ciclo para ir hasta n
		fi(n){
		cout<<fibonacci(i)<<"\n";
		}
		return 0;
		}
		*/
