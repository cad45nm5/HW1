#include<stdio.h>
#include<stdlib.h>


int main(void){
	int num=0, num2=0;
	printf("輸入兩數:");
	scanf_s("%d%d",&num,&num2);

	if (num%num2 == 0){
		printf("%d 是 %d 的倍數",num,num2);
	}
	else{
		printf("%d 不是 %d 的倍數", num, num2);
	}
	printf("\n");
	system("pause");
	return 0;
}