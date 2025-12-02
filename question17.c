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
	printf("%-12s %-6s %6s\n", "Name", "Roll", "Marks");
	for (int i = 0; i < 5; i++){
	printf("%-12s %-6d %6.2f\n", s[i].name, s[i].roll, s[i].marks);
	}
	return 0;
}
