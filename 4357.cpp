#include <cstdio>
using namespace std;

int n;
// 二叉堆上节点索引 ∈ [1, n]。
unsigned long long a[100007];
unsigned long long s;

void insert(unsigned long long x) {
	n++;
	a[n] = x;
	int i = n;
	while (i > 1 && a[i / 2] > a[i]) {
		unsigned long long tmp = a[i];
		a[i] = a[i / 2];
		a[i / 2] = tmp;
		i /= 2;
	}
}

void down_heapify(int i) {
	while (i * 2 <= n) {
		int j = i * 2;
		if (i * 2 + 1 <= n && a[i * 2] > a[i * 2 + 1]) j++;
		if (a[i] > a[j]) {
			unsigned long long tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i = j;
		} else {
			break;
		}
	}
}

unsigned long long extract() {
	unsigned long long r = a[1];
	a[1] = a[n];
	n--;
	down_heapify(1);
	return r;
}

int main(int argc, char **argv) {
	scanf("%d", &argc);
	while (argc--) {
		unsigned long long x;
		scanf("%llu", &x);
		insert(x);
	}
	while (n > 1) {
		unsigned long long x = extract();
		x += extract();
		s += x;
		insert(x);
	}
	printf("%llu\n", s);
	return 0;
}
