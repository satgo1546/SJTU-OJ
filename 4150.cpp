#include <iostream>
using namespace std;

int a[1001];

int main(int argc, char *argv[]) {
	int n, m;
	cin >> n >> m;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		sum += a[i];
		if (i >= n) sum -= a[i - n];
		cout << sum / (i < n ? i + 1 : n) << endl;
	}
	return 0;
}
