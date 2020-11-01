#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	unsigned a = 1, b = 1;
	scanf("%d", &argc);
	if (argc <= 0) exit(puts("error!") & 0);
	if (argc <= 3) exit(printf("%d\n", argc / 2) & 0);
	argc -= 3;
	if (argc & 1) goto l2;
l1:
	a += b;
	argc--;
l2:
	b += a;
	argc--;
	if (argc) goto l1;
	printf("%u\n", b);
	return 0;
}
