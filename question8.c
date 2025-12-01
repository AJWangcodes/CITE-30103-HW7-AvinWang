#include <stdio.h>

int main(void){
	int n, x, even=0, odd=0;
	printf("Enter size of list: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &x);
		if(x%2==0) even++;
		else odd++;
	}
	printf("Even = %d\nOdd = %d\n", even, odd);
	return 0;

}
