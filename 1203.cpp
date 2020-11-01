#include <cstdio>
using namespace std;

int a[20006];
char b[20006];
double c[20006];
char t[42];
int n;

// 使用重载运算符的有额外加分（迫真）
class L {
public:
	bool operator+(char t) {
		if (t == 'i') {
			for (int i = 0; i < n; i++) {
				scanf("%d", &a[i]);
				printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
			}
		} else if (t == 'c') {
			for (int i = 0; i < n; i++) {
				getchar();
				b[i] = getchar();
				putchar(b[i]);
				putchar(i == n - 1 ? '\n' : ' ');
			}
		} else {
			for (int i = 0; i < n; i++) {
				scanf("%lf", &c[i]);
				printf("%g%c", c[i], i == n - 1 ? '\n' : ' ');
			}
		}
		return true;
	}
};

int main(int argc, char *argv[]) {
	scanf(" %s %d%d", &t, &argc, &n);
	n += argc;
	L l;
	argc = l + t[0];
	return argc - 1;
}
