#include <cstdio>
using namespace std;

int a_[10010];
int *const a = &a_[4];

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		a[i] += a[i - 1];
	}
	scanf("%d", &argc);
	while (argc--) {
		int i, j;
		scanf("%d%d", &i, &j);
		printf("%d\n", a[j - 1] - a[i - 2]);
	}
	return 0;
}
