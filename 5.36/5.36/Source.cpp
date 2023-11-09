#include <stdio.h>


void hanoi(int n, char source, char auxiliary, char target);

int main() {
	int n = 4; 

	hanoi(n, 'A', 'B', 'C');

	return 0;
}

void hanoi(int n, char source, char auxiliary, char target) {
	if (n == 1) {
		printf("Move %c to %c\n", source, target);
		return;
	}

	hanoi(n - 1, source, target, auxiliary);
	printf("Move %c to %c\n", source, target);
	hanoi(n - 1, auxiliary, source, target);
}
