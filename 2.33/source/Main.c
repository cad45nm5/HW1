#include<stdio.h>
#include<stdlib.h>



int main(void){
	float  miles_per_day, gasoline_price, distance_per_gallon, parking_fee, tolls,total=0;
	printf("Please enter your miles_per_day:");
	scanf_s("%f", &miles_per_day);
	printf("Please enter cost_per_gallon_of_gasoline:");
	scanf_s("%f", &gasoline_price);
	printf("Please enter average_miles_per_gallon:");
	scanf_s("%f", &distance_per_gallon);
	printf("Please enter your parking_fee_per_day:");
	scanf_s("%f", &parking_fee);
	printf("Please enter your tolls_per_day:");
	scanf_s("%f", &tolls);
	total = (miles_per_day/distance_per_gallon)*gasoline_price + parking_fee + tolls;

	printf("Your daily cost is $ %.2lf\n",total);

	system("pause");
	return 0;
}