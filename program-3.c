#include <stdio.h>
#include <math.h>
#define Pi 3.14

int main()
{
	
int yaricap;
float hacim;

printf("Hesaplamak istediginiz kurenin yaricap degerini giriniz: ");
scanf("%d",&yaricap);

hacim=(4.0/3)*Pi*pow(yaricap,3);

printf("Olusturdugunuz kurenin hacmi: %.1f",hacim);

return 0;	
}
