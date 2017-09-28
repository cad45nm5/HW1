#include<stdio.h>
#include<stdlib.h>


int main(void){
	int n[3];
	
	scanf_s("%d%d%d",&n[0],&n[1],&n[2]);

	for (int i = 0; i < 3; i++){
		if ((n[i] - n[0] <= 0) && (n[i] - n[1] <= 0) && (n[i] - n[2] <= 0)){
			printf("%d is the smallest number\n",n[i]);
		}
		else if ((n[i] - n[0] >= 0) && (n[i] - n[1] >= 0) && (n[i] - n[2] >= 0)){
			printf("%d is the greatest number\n", n[i]);
		}
	}

	system("pause");
	return 0;
	
	
}