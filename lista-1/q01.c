#include <stdio.h>

int main() {
	float x;
	
	puts("Um número:");
	scanf("%f", &x);

	printf("Hexa: %x", hex(x));
	return 0;
}