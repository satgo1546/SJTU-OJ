#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y, s = 0;
	cin >> x >> y >> argc;
	x += y;
	while (argc--) {
		cin >> y;
		s += (x >= y);
	}
	cout << s << endl;
	return 0;
}
