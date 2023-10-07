#include<stdio.h>
#include <math.h>
int main(){
float a;
	printf("Enter a number : ");
	scanf("%f",&a);
	printf("The floor value of a given float is : %f",floor(a));
	printf("The ceil value of a given float is : %f",ceil(a));
	return 0;
}
