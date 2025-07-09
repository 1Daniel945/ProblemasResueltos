#include <immintrin.h>
#include <stdio.h>

int main() {
  // Declaramos un vector de 100 elementos para almacenar los números de Fibonacci
  __m256i fibonacci[100];

  // Inicializamos los dos primeros números de Fibonacci
  const int value0 = 0;
  const int value1 = 1;
  fibonacci[0] = _mm256_set1_epi32(value0);
  fibonacci[1] = _mm256_set1_epi32(value1);

  // Calculamos los siguientes números de Fibonacci
  for (int i = 2; i < 100; i++) {
    // Usamos la operación AVX2 _mm256_add_epi32 para sumar los dos últimos números de Fibonacci
    fibonacci[i] = _mm256_add_epi32(fibonacci[i - 1], fibonacci[i - 2]);
  }

  // Imprimimos los 100 primeros números de Fibonacci
  for (int i = 0; i < 100; i++) {
    int result[8]; // Vector para almacenar los valores
    _mm256_storeu_si256((__m256i*)result, fibonacci[i]);

    for (int j = 0; j < 8; j++) {
      printf("%d\n", result[j]);
    }
  }

  return 0;
}
