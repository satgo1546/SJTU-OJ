#include <stdio.h>
 
int t[1000004];
int main() {
	int n, i, a = 0;
	t[0] = 0;
	// 预先计算1 ⊕ 2 ⊕ … ⊕ i。
	for (i = 1; i <= 1000000; i++) {
		t[i] = t[i - 1] ^ i;
	}
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		a ^= t[n % i];
		if ((n / i) & 1) a ^= t[i - 1];
	}
	printf("%d\n", a);
	return 0;
}
