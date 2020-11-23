#include <cstdio>

int det(int a[10][10], int n) {
	int minor[10][10];
	int r = 0;
	int sgn = 1;
	if (n == 2) return a[0][0] * a[1][1] - a[1][0] * a[0][1];
	for (int i = 0; i < n; i++) {
		int c1 = 0, c2 = 0;
		for (int j = 1; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (k != i) {
					minor[c1][c2] = a[j][k];
					c2++;
					if (c2 > n - 2) {
						c2 = 0;
						c1++;
					}
				}
			}
		}
		r += sgn * (a[0][i] * det(minor, n - 1));
		sgn = -sgn;
	}
	return r;
}

int main() {
	int a[10][10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("%d\n", det(a, n));
}
