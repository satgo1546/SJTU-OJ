#include <map>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct node {
	int g; // 团体号
  int next; // 链式队列中下一个节点的下标
};

int n;
// 通过在数组里链接下标的方式来实现链式队列的同时，避免了new和delete。
node a[2000005];
int head = -1;
int tail = -1;
// 下一个要入队的人的下标。
int outer = 0;
// 记录每个团体末尾是谁，a[grouptail[团体号]]就是团体末尾的那个node。
map<int, int> grouptail;
 
int main(int argc, char *argv[]) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i].g);
		a[i].next = -1;
	}
	scanf("%d", &argc);
	while (argc--) {
		int op;
		scanf("%d", &op);
		if (op) {
			// 出队。
			if (head < 0) {
				puts("-1");
				continue;
			}
      // 输出的“编号”是指此人第几个入队。
			printf("%d\n", head + 1);
			if (grouptail[a[head].g] == head) {
				grouptail.erase(a[head].g);
			}
			head = a[head].next;
			if (head < 0) tail = -1;
		} else {
			// 入队。
			if (outer >= n) continue;
			if (head < 0) {
				head = tail = outer;
				grouptail[a[outer].g] = outer;
			} else {
				// 找一团体号相同的组的尾巴。
				int ind = tail;
				if (grouptail.find(a[outer].g) != grouptail.end()) ind = grouptail[a[outer].g];
				a[outer].next = a[ind].next;
				a[ind].next = outer;
				if (a[outer].next < 0) tail = outer;
				grouptail[a[outer].g] = outer;
			}
			outer++;
		}
		// 调试用输出。
		if (0) {
			for (int ind = 0; ind < n; ind++) {
				printf("[%2d] %4d %2d ", ind, a[ind].g, a[ind].next);
				if (ind == head) printf(" head");
				if (ind == tail) printf(" tail");
				if (ind == outer) printf(" outer");
				printf("\n");
			}
			int ind = head;
			while (ind >= 0) {
				printf("%d ", a[ind].g);
				ind = a[ind].next;
			}
			putchar('\n');
		}
	}
	return 0;
}
