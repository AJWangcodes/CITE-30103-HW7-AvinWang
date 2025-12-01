#include <stdio.h>
int max3(int a, int b, int c){
	int m = a;
	if(b>m) m=b;
	if(c>m) m=c;
	return m;
}

int main(void){
	int a,b,c;
	printf("Enter three integers: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("Max = %d\n", max3(a,b,c));
	return 0;
}
