#include <stdio.h>
int isPrime(int n){
	if(n<2) return 0;
	for(int d=2; d*d<=n; d++)
		if(n%d==0) return 0;
	return 1;
}

int main(void){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	puts(isPrime(n) ? "Prime" : "Not Prime");
	return 0;
}
