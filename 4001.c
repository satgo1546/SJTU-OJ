#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	unsigned long long a = 0, b = 0, *p = &a;
	while ((argc = getchar()) >= ' ') {
		if (strchr("0123456789", argc)) {
			*p *= 10;
			*p += argc - '0';
			if (*p >= 100000000) goto large;
		} else if (argc == '+') {
			p = &b;
		}
	}
	a += b;
	if (a >= 100000000) goto large;
	printf("%d\n", a);
	return 0;
large:
	puts("Large");
	return 0;
}

