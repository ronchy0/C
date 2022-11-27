#include <stdio.h>

// ekrana girilen 5 sayinin ortalamasini hesaplayan bir program yaziniz.
int main()
{
	
float a,b,c,d,e;
printf("Ortalamasini hesaplamak istediginiz 5 sayi giriniz.\n");

printf("sayi1: ");
scanf("%f",&a);

printf("sayi2: ");
scanf("%f",&b);

printf("sayi3: ");
scanf("%f",&c);

printf("sayi4: ");
scanf("%f",&d);

printf("sayi5: ");
scanf("%f",&e);

float ort=(a+b+c+d+e)/5;
printf("\nSectiginiz 5 sayinin ortalamasi: %.1f",ort);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
