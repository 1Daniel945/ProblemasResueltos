#include "cpuinfo.hpp"
#include <iostream>
#include <math.h>  
#include <time.h>
#include <x86intrin.h>
#include <bits/stdc++.h>
#include <vector>
#include <numeric> 
using namespace std;
#define vals 1000000

// Cabeceras de funciones
void main_cpu();
int sumaN_intrinsec(int X[]);
int sumaN(int X[]);
int dotProduct_Function(vector<int> v1, vector<int> v2 );
int dotProduct_Iteration(vector<int> v1, vector<int> v2);
int dotProduct_Intrinsec(int *v1, int *v2, int len);
void testPerformance_SumaN();
void testPerformance_dotProduct();
vector<int> randomVector (int n, int upperBound);

// Función de Test
int main(void)
{
    main_cpu();
    testPerformance_SumaN();
    testPerformance_dotProduct();
    return 0;
}

void testPerformance_dotProduct()
{
    clock_t start, end;
    double cpu_time_used;
    srand(time(NULL));

    int numValues = vals;
    int upperBound = 10;
    vector<int> v1 = randomVector (numValues, upperBound);
    vector<int> v2 = randomVector (numValues, upperBound);

    // Dot Product  v1, v2 N = 1E6 valores enteros dot_product function
    start = clock();
    cout << "dot_Product function = " << dotProduct_Function(v1,v2) << "\n";
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "dot_Product function took = " << cpu_time_used*1000<< "mS"<< "\n";

    // Dot Product  v1, v2 N = 1E6 valores enteros iteration
    start = clock();    
    cout << "dot_Product iteration = " << dotProduct_Iteration(v1,v2) << "\n";
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "dot_Product iteration took = " << cpu_time_used*1000<< "mS"<< "\n";

    // Dot Product  v1, v2 N = 1E6 valores enteros Intrinsec Iteration
    start = clock();    
    cout << "dot_Product iteration = " << dotProduct_Intrinsec(&v1[0],&v2[0], (int)(v1.size())) << "\n";
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "dot_Product Intrinsec took = " << cpu_time_used*1000<< "mS"<< "\n";

}

void testPerformance_SumaN()
{
    clock_t start, end;
    double cpu_time_used;
    srand(time(NULL));
    int X[vals];
    for(int i = 0; i <vals; i++)
        X[i] = rand()% 10;

    // Suma de N = 1E6 valores enteros FOR-LOOP suma de enteros
    start = clock();
    cout << "Suma N = " << sumaN(X) << "\n";
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "SUMA N Call took = " << cpu_time_used*1000<< "mS"<< "\n";

    // Suma de N = 1E6 valores enteros FOR-LOOP suma intrinseca de enteros
    start = clock();    
    cout << "Suma N = " << sumaN_intrinsec(X) << "\n";
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "SUMA N Intrinsec took = " << cpu_time_used*1000<< "mS"<< "\n";
}

void main_cpu()
{
    CPUInfo cinfo;
    cout << "CPU vendor = " << cinfo.vendor() << "\n";
    cout << "CPU Brand String = " << cinfo.model() << "\n";
    cout << "# of cores = " << cinfo.cores() << "\n";
    cout << "# of logical cores = " << cinfo.logicalCpus() << "\n";
    cout << "Is CPU Hyper threaded = " << (cinfo.isHyperThreaded() ? "OK" : "NONE") << "\n";
    cout << "CPU SSE = " << (cinfo.haveSSE() ? "OK" : "NONE")<< "\n";
    cout << "CPU SSE2 = " << (cinfo.haveSSE2() ? "OK" : "NONE")<< "\n";
    cout << "CPU SSE3 = " << (cinfo.haveSSE3() ? "OK" : "NONE")<< "\n";
    cout << "CPU SSE41 = " << (cinfo.haveSSE41() ? "OK" : "NONE")<< "\n";
    cout << "CPU SSE42 = " << (cinfo.haveSSE42() ? "OK" : "NONE")<< "\n";
    cout << "CPU AVX = " << (cinfo.haveAVX() ? "OK" : "NONE")<< "\n";
    cout << "CPU AVX2 = " << (cinfo.haveAVX2() ? "OK" : "NONE")<< "\n";
    cout << "CPU AVX512F = " << (cinfo.haveAVX512F() ? "OK" : "NONE")<< "\n";
}

int sumaN(int X[])
{
    int suma = 0;
    for(int i =0;i < vals; i++)
        suma += X[i];
    return suma;
}

int sumaN_intrinsec(int X[])
{
    unsigned int suma = 0;
    bool flagMod4 = false;
    
    //Calcula si es necesario hacer un ajuste de las sumas por no ser múltiplo exacto de 4
    int residuo = vals%4;
    flagMod4 = residuo  ? true : false; 
    
    //Carga los primeros 4 enteros en la variable de 128b
    __m128i resultado = _mm_load_si128((const __m128i*)&X[0]);
    
    // Itera sobre el banco de datos
    for (int i = 4; i < vals; i += 4) 
    {
        // Carga el paquete siguiente de 4 enteros
        __m128i nextvalue = _mm_load_si128((const __m128i*)&X[i]);

        // Suma el paquete datos siguiente con la suma acumulada
        resultado = _mm_add_epi32 (resultado, nextvalue);
    }
    // Suma los cuatro valores contenidos en la variable de 128 bits
    suma += _mm_extract_epi32 (resultado, 0);
    suma += _mm_extract_epi32 (resultado, 1);
    suma += _mm_extract_epi32 (resultado, 2);
    suma += _mm_extract_epi32 (resultado, 3);
        // Suma los valores restantes después de realizar la carga de 4 en cuatro enteros
    if(flagMod4){
        for(int i = 0; i< residuo; i++)
            suma += X[vals - 1 - i];
    }
    return suma;
}

int dotProduct_Function(vector<int> v1, vector<int> v2 )
{
    int dotProduct = inner_product(v1.begin(), v1.end(), v2.begin(), 0);
    return dotProduct;
}

int dotProduct_Iteration(vector<int> v1, vector<int> v2)
{
    int result = 0;
    for (unsigned int i = 0; i < v1.size(); ++i) 
    {
        result += v1[i] * v2[i];
    }
    return result;
}

#pragma GCC target("sse4.1")
int dotProduct_Intrinsec(int *v1, int *v2, int len)
{
    bool flagMod4 = false;
    int dotProduct = 0;
    //Calcula si es necesario hacer un ajuste de las sumas por no ser múltiplo exacto de 4
    int residuo = vals%4;
    flagMod4 = residuo  ? true : false; 
    
    //Carga los primeros 4 enteros en la variable de 128b
    __m128i dotProduct_temp = _mm_set_epi32(0, 0, 0, 0);

    // Itera sobre el banco de datos
    for (int i = 0; i < vals; i += 4) 
    {
        // Carga el paquete siguiente de 4 enteros
        __m128i nextvalue_v1 = _mm_load_si128((const __m128i*)(v1 + i));
        __m128i nextvalue_v2 = _mm_load_si128((const __m128i*)(v2 + i));
        __m128i dotProduct_pair = _mm_mullo_epi32(nextvalue_v1,nextvalue_v2);
        // Suma el paquete datos siguiente con la suma acumulada
        dotProduct_temp = _mm_add_epi32 (dotProduct_temp, dotProduct_pair);
    }

    // Suma los cuatro valores contenidos en la variable de 128 bits
    dotProduct += _mm_extract_epi32(dotProduct_temp, 0);
    dotProduct += _mm_extract_epi32(dotProduct_temp, 1);
    dotProduct += _mm_extract_epi32(dotProduct_temp, 2);
    dotProduct += _mm_extract_epi32(dotProduct_temp, 3);
    
    // Suma los productos restantes después de realizar la carga de 4 en cuatro enteros
    if(flagMod4){
        for(int i = 0; i< residuo; ++i)
            dotProduct += (v1[len - 1 - i] * v2[len - 1 - i]);
    }
    return dotProduct;
}

vector<int> randomVector (int n, int upperBound) {
  vector<int> vec (n);
    for (size_t i = 0; i < vec.size(); i++){
        vec[i] = rand()%upperBound;
        //vec[i] = 1;
    }
  return vec;
}