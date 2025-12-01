#include <stdio.h>
float toCelsius(float f){
	return (f-32.0f)*(5.0f/9.0f);
}

int main(void){
	float f;
	printf("Fahrenheit: ");
	scanf("%f", &f);
	printf("Celsius = %.2f\n", toCelsius(f));
	return 0;
}
