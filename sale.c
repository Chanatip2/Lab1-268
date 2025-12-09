#include<stdio.h>

int main() {
	
	float price1, price2, price3, totalvat;
	
	printf("Enter Price1: ");
	scanf("%f",&price1);
	float total1 = price1 * 0.95 ;
	totalvat = total1 * 1.07 ;
	printf("Total promotionA (5%% discount):%.2f\n" , total1);
	printf("TotalPromotionA VAT(7%%):%.2f\n",totalvat);
	
	printf("Enter Price2: ");
	scanf("%f",&price2);
	float total2 = price2 * 0.85 ;
	totalvat = total2 * 1.07 ;
	printf("Total promotionB (15%% discount):%.2f\n" , total2);
	printf("TotalPromotionB VAT(7%%):%.2f\n",totalvat);
	
	printf("Enter Price3: ");
	scanf("%f",&price3);
	float total3 = price3 * 0.70 ;
	totalvat = total3 * 1.07 ;
	printf("Total promotionC (30%% discount):%.2f\n" , total3);
	printf("TotalPromotionC VAT(7%%):%.2f\n",totalvat);
	
	return 0;
		
}

