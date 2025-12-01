#include <stdio.h>
int main(void){
	char a[100], b[100], result[200];
	scanf("%100s %100s", a, b);
	int i = 0;
	while(a[i]){
		result[i]=a[i];
		i++;
	}
	
	int j=0;
	while(b[j]){
		result[i++]=b[j++];
	}
	result[i]='\0';

	printf("Concatenated: %s\n", result);
	return 0;
}
