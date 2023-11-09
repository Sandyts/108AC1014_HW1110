#include <stdio.h>

double power(double base, int exponent);

int main() {
	double base;
	int exponent;

	printf("Base¡G");
	scanf("%lf", &base);
	printf("Power¡G");
	scanf("%d", &exponent);

	double result = power(base, exponent);
	printf("%.2lf ^ %d  %.2lf\n", base, exponent, result);

	return 0;
}

double power(double base, int exponent) {
	if (exponent == 0) {
		return 1.0;
	}
	else if (exponent < 0) {
		return 1.0 / (base * power(base, -exponent - 1));
	}
	else {
		return base * power(base, exponent - 1);
	}
}
