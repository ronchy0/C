#include <stdio.h>
#include <math.h>

// dik bir ucgenin hipotenusunu bulan kullanici girisli program yaziniz. 
int main()
{

int kenar1,kenar2;

printf("Ucgen icin bir kenar uzunlugu giriniz: ");
scanf("%d",&kenar1);

printf("Ucgen icin ikinci kenar uzunlugunu giriniz: ");
scanf("%d",&kenar2);

float hipotenuskaresi,hipotenus;

hipotenuskaresi=pow(kenar1,2)+pow(kenar2,2);
hipotenus=sqrt(hipotenuskaresi);

printf("\nOlusturdugunuz ucgenin hipotenus degeri: %.1f",hipotenus);

return 0;	
}
