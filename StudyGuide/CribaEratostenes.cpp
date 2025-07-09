#include <bits/stdc++.h>
#define fr(i,a,b)for(int i=a; i<(int)b; ++i)
#define in >>
#define p <<
using namespace std;

vector<bool> cribaEratostenes(int n) {
  vector<bool> esPrimo(n + 1, true);
  for (int i = 2; i <= 10000; i++) {
    if (esPrimo[i]) {
      for (int j = i * 2; j <= 10000; j += i) {
        esPrimo[j] = false;
      }
    }
  }
  return esPrimo;
}

int main() {
  int n;
  cin >> n;
  vector<bool> primos = cribaEratostenes(10000);
  vector<int> primeNumbers;
  for (int i = 2; i <= 10000; i++) {
    if (primos[i]) {
        primeNumbers.push_back(i);
    }
  }
  cout p primeNumbers[n-1] p "\n";
  return 0;
}
