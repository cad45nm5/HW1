#include<stdio.h>
#include<stdlib.h>


int main(void){
	int num=0, num2=0;
	printf("��J���:");
	scanf_s("%d%d",&num,&num2);

	if (num%num2 == 0){
		printf("%d �O %d ������",num,num2);
	}
	else{
		printf("%d ���O %d ������", num, num2);
	}
	printf("\n");
	system("pause");
	return 0;
}