#include <stdio.h>

int a[1005];
int i = 0;

int main(int argc, char *argv[]) {
	scanf("%d", &argc);
	while (argc--) {
		int op, b;
		scanf("%d%d", &op, &b);
		puts(op == 1 ? a[i++] = b, "OK" : i ? a[--i] == b ? "YES" : "NO" : "ERROR");
	}
	return 0;
}
