#include <cstdio>
using namespace std;

int n;
// 不使用此数组中的第0个元素，以零next作为表尾。
struct {
	int x, next;
} a[100007];
int head;
int s;

void search(int x) {
	int i = head;
	int prev = 0;
	while (i) {
		s++;
		if (a[i].x == x) {
			if (prev) {
				a[prev].next = a[i].next;
				a[i].next = head;
				head = i;
			}
			return;
		}
		prev = i;
		i = a[i].next;
	}
}

int main(int argc, char **argv) {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i].x);
		a[i].next = i + 1;
	}
	head = 1;
	a[n].next = 0;
	scanf("%d", &argc);
	while (argc--) {
		int x;
		scanf("%d", &x);
		search(x);
	}
	printf("%d\n", s);
	return 0;
}
