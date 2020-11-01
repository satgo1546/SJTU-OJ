#include <iostream>
using namespace std;

// 要检查的方格组。
const int f[3][2][9] = {
	{
		{0, 9, 18, 27, 36, 45, 54, 63, 72},
		{0, 1, 2, 3, 4, 5, 6, 7, 8},
	}, {
		{0, 1, 2, 3, 4, 5, 6, 7, 8},
		{0, 9, 18, 27, 36, 45, 54, 63, 72},
	}, {
		{0, 3, 6, 27, 30, 33, 54, 57, 60},
		{0, 1, 2, 9, 10, 11, 18, 19, 20},
	}
};
int a[81];

int main(int argc, char *argv[]) {
	cin >> argc;
	while (argc--) {
		bool b = true;
		for (int i = 0; i < 81; i++) cin >> a[i];
		for (int i = 0; i - 3; i++) {
			for (int j = 0; j - 9; j++) {
				// 检查方格组中的数字有无重复。
				int t = 0;
				for (int k = 0; k - 9; k++) t ^= 1 << a[f[i][0][j] + f[i][1][k]];
				if (t - 1022) b = false;
			}
		}
		cout << (b ? "Right" : "Wrong") << endl;
	}
	return 0;
}
