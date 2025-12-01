#include <stdio.h>
int main(void){
	int a[10];
	printf("Enter 10 integers: ");
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0], max=a[0];
	for(int i=1;i<10;i++){
		if(a[i]<min) min=a[i];
		if(a[i]>max) max=a[i];
	}
	printf("Min = %d\nMax = %d\n", min, max);
	return 0;
}
