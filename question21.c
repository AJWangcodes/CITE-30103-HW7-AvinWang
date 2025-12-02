#include <stdio.h>
int main(void){
	int x;
	scanf("%d", &x);
	int *p=&x;
	printf("Value: %d\n", x);
	printf("Address: %p\n", (void*)&x);
	printf("Dereferenced: %d\n", *p);
	return 0;
}
