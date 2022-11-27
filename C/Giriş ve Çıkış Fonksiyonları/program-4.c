#include <stdio.h>
#include <math.h>

// ax^2+bx+c ifadesindeki polinomu icin kullanici girisli bir kok bulma prgorami yaziniz.
int main()
{
	
int a,b,c;
float discriminant,kok1,kok2;

printf("a kat sayisi icin bir deger giriniz: ");
scanf("%d",&a);

printf("b kat sayisi icin bir deger giriniz: ");
scanf("%d",&b);

printf("c sabit terimi icin bir deger giriniz: ");
scanf("%d",&c);

discriminant=pow(b,2)-(4*a*c);

kok1=(-b+sqrt(discriminant))/(2.0*a);
kok2=(-b-sqrt(discriminant))/(2.0*a);
	
printf("\nGirilen degerler ile olusturulan polinomun kokleri --->  Kok1: %.1f  Kok2: %.1f",kok1,kok2);
	
	
	
	
	
	
	
	
	
return 0;
}
