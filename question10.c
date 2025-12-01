#include <stdio.h>
int main(void){
	int A[3][3], B[3][3];
	
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &A[i][j]);
		}
	}
        for(int i=0; i<3;i++){
                for(int j=0;j<3;j++){
                        scanf("%d", &B[i][j]);
                }
        }
	puts("A:");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++) printf("%d%c", A[i][j], j==2?'\n':' ');
	}
	puts("B:");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++) printf("%d%c", B[i][j], j==2?'\n':' ');
	}
        puts("A+B:");
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++) printf("%d%c", A[i][j]+B[i][j], j==2?'\n':' ');
        }
	return 0;
}
