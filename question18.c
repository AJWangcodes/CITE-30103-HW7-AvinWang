#include <stdio.h>
struct Student{
	char name[40];
	int roll;
	float marks;
};

int main(void){
	struct Student s[5];
	for(int i=0;i<5;i++){
		scanf("%39s %d %f", s[i].name, &s[i].roll, &s[i].marks);
	}

	int high=0;
	for(int i=1;i<5;i++){
		if(s[i].marks > s[high].marks){
			high=i;
		}
	}
	printf("The highest mark is: %s %d %.2f\n", s[high].name, s[high].roll, s[high].marks);
	return 0;
}
