#include <stdio.h>
int main(void){
	int a[5];
	int *p=a;
	for(int i=0;i<5;i++){
		scanf("%d", p+i);
	}
	for(int i=0;i<5;i++){
		printf("%d%c", *(p+i), i==4?'\n':' ');
	}
	return 0;
}
