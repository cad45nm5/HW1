#include<stdio.h>
#include<stdlib.h>


int main(void){
	while (1)
	{
		int num = 0;

		printf("Please enter a number:");
		scanf_s("%d", &num);

		if (num % 2 == 1){
			printf("odd\n");
		}
		else {
			printf("even\n");
		}
		
	}
	system("pause");
	return 0;
}