#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("enter the height:");
	scanf("%f",&hei);
	printf("enter your weight:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("your body mass index %f\n",bmi);
	if(bmi>=30)
		printf("obese");
	else if(bmi>=25)
		printf("overweight");
	else if(bmi>=18.5)
		printf("normal");
	else
		printf("underweight");
	return 0;
}
		
	
	

