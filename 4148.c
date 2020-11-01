#include <stdio.h>

// 全局变量初始化为零。
int a[1001][1001];
int n, m, p;

int main(int argc, char *argv[]) {
	scanf("%d%d%d", &n, &m, &p);
	int i = 0, j = 0;
	// i + di、j + dj指示行进方向。
	int di = !p, dj = p;
	int k;
	for (k = 1; k <= n * m; k++) {
		a[i][j] = k;
		i += di;
		j += dj;
		if (i < 0 || j < 0 || i >= n || j >= m || a[i][j]) {
			i -= di;
			j -= dj;
			// 复数乘法是旋转。
			di ^= dj;
			dj ^= di;
			di ^= dj;
			*(p ? &dj : &di) *= -1;
			i += di;
			j += dj;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d%c", a[i][j], j == m - 1 ? '\n' : ' ');
		}
	}
	return 0;
}
