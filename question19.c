#include <stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
struct Student{
	char name[40];
	int roll;
	float marks;
	struct Date dob;
};
int main(void){
	struct Student s;
	printf("Enter student name, roll, mark, and DOB: ");
	scanf("%39s %d %f %d %d %d", s.name, &s.roll, &s.marks, &s.dob.day, &s.dob.month, &s.dob.year);
	printf("Name: %s\n", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
        printf("DOB: %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
	return 0;
}
