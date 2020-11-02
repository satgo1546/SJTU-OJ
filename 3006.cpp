#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cin >> argc;
	while (argc--) {
		int n;
		cin >> n;
		int sum = 0;
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}
