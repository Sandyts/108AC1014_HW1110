#include <stdio.h>

int gcd(int a, int b);


int lcm(int a, int b);

int main() {
	int num1, num2;

	
	printf("num1¡G");
	scanf("%d", &num1);
	printf("num2¡G");
	scanf("%d", &num2);

	int result = lcm(num1, num2);
	printf("The LCM = %d\n", result);

	return 0;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
