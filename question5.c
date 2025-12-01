#include <stdio.h>
long factorial(int n){
	if(n<=1) return 1;
	return (long)n * factorial(n-1);
}

int main(void){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	if(n<0){
		puts("ERROR: NO NEGATIVE NUMBERS!");
		return 1;
	}
	printf("%d! = %ld\n", n, factorial(n));
	return 0;
}
