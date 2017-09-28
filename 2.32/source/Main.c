#include<stdio.h>
#include<stdlib.h>

int main(void){
	float BMI, weight, height;

	printf("Please enter your height,weight:");
	scanf_s("%f%f",&height,&weight);
	
	BMI = weight / height / height*10000;

	printf("Your BMI is %.1lf", BMI);

	if (BMI<18.5){
		printf("------>underweight.");
	}
	else if (BMI<24.9){
		printf("------>normal.");
	}
	else if (BMI<29.9){
		printf("------>overweight.");
	}
	else {
		printf("------>obese.");
	}
	printf("\n");

	system("pause");
	return 0;

}