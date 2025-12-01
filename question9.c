#include <stdio.h>
int main(void){
	int a[5];
	printf("Enter 5 integers: ");
	for(int i=0;i<5;i++) scanf("%d", &a[i]);
	int i=0, j=4;
	while(i<j){
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	for(int k=0;k<5;k++) printf("%d%c", a[k], k==4?'\n':' ');
	return 0;
}
