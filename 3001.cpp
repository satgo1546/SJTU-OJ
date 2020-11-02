#include <iostream>
using namespace std;

bool only47(int x) {
	while (x) {
		if (x % 10 != 4 && x % 10 != 7) return false;
		x /= 10;
	}
	return true;
}

bool prime(int x) {
	if (x < 3) return x == 2;
	if (~x & 1) return false;
	for (int i = 3; i * i <= x; i += 2) {
		if (x % i == 0) return false;
	}
	return true;
}

int main(int argc, char *argv[]) {
	cin >> argc;
	cout << (only47(argc) && prime(argc) ? "YES\n" : "NO\n");
	return 0;
}
