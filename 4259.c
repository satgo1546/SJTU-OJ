#include <stdio.h>
#define x 1000000007ULL

int main(int argc, char *argv[]) {
	// n × (n + 1) × (n + 2) × m × (m + 1) × (m + 2) ∕ 36
	unsigned long long a, b, c, d, e, f;
	scanf("%llu%llu", &a, &d);
	b = a + 1;
	c = a + 2;
	e = d + 1;
	f = d + 2;
	if (a % 3 == 0) a /= 3; else if (b % 3 == 0) b /= 3; else c /= 3;
	if (d % 3 == 0) d /= 3; else if (e % 3 == 0) e /= 3; else f /= 3;
	if (a % 2 == 0) a /= 2; else b /= 2;
	if (d % 2 == 0) d /= 2; else e /= 2;
	a %= x;
	b %= x;
	c %= x;
	d %= x;
	e %= x;
	f %= x;
	a *= b; a %= x;
	a *= c; a %= x;
	a *= d; a %= x;
	a *= e; a %= x;
	a *= f; a %= x;
	printf("%llu\n", a);
	return 0;
}
