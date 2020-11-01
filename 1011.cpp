#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	printf("%.2f %.2f\n", a + c, b + d);
	printf("%.2f %.2f\n", a - c, b - d);
	printf("%.2f %.2f\n", a * c - b * d, c * b + a * d);
	printf("%.2f %.2f\n", (a * c + b * d) / (c * c + d * d), (b * c - a * d) / (c * c + d * d));
	printf("%.2f %.2f\n", a + c, b + d);
	a += c;
	b += d;
	a -= c;
	b -= d;
	printf("%.2f %.2f\n", a, b);
	double e = a * c - b * d;
	double f = c * b + a * d;
	a = e;
	b = f;
	e = (a * c + b * d) / (c * c + d * d);
	f = (b * c - a * d) / (c * c + d * d);
	printf("%.2f %.2f\n", a, b);
	printf("%.2f %.2f\n", e, f);
	return 0;
}
