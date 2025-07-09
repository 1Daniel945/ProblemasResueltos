#include <iostream>
using namespace std;

bool is_lucky(int n) {
	while (n > 0) {
		int d = n % 10;
		if (d != 4 && d != 7) {
			return false;
		}
		n /= 10;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && is_lucky(i)) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}
