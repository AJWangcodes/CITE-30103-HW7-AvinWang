#include <stdio.h>
struct Student{
	char name[40];
	int roll;
	float marks;
};
void printStudent(struct Student s){
	printf("Name: %s\n", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Mark: %.2f\n", s.marks);
}

int main(void){
	struct Student s;
	scanf("%39s %d %f", s.name, &s.roll, &s.marks);
	printStudent(s);
	return 0;
}
