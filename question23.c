#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	printf("Enter amount of elements to use: ");
	scanf("%d", &n);
	int *a= malloc((size_t)n * sizeof *a);
	if(!a) return 1;
	long long sum = 0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	float avg=(float)sum/n;
	printf("Average: %.2f\n", avg);
	return 0;
}
