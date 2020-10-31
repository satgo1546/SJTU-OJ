#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y;
	for (;;) {
		cin >> x >> y;
		if (!cin.eof()) {
			cout << x + y << endl;
		} else {
			break;
		}
	}
	return 0;
}
