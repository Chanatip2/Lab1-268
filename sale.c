#include<stdio.h>

int main() {
	
	float price1, price2, price3, total;
	
	printf("Enter Price1: ");
	scanf("%f",&price1);
	float total1 = price1 * 0.95 ;
	printf("Total promotionA (5%% discount):%.2f\n" , total1);
	
	printf("Enter Price2: ");
	scanf("%f",&price2);
	float total2 = price2 * 0.85 ;
	printf("Total promotionB (15%% discount):%.2f\n" , total2);
	
	printf("Enter Price3: ");
	scanf("%f",&price3);
	float total3 = price3 * 0.70 ;
	printf("Total promotionC (30%% discount):%.2f\n" , total3);
	
	return 0;
		
}
