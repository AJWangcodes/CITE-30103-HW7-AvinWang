#include <stdio.h>
int main(void){
	int n, a[100];
	long long sum =0;
	printf("Enter the length of your array <=100: ");
	if (scanf("%d",&n)!=1 || n<1 || n>100) return 1;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); sum += a[i];
	}
	printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum/n);
	return 0;
}
