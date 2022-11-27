#include <stdio.h>

// Ogrencilerin notlarini girip ortalamalarini hesaplayabilen bir program yaziniz.
int main()
{

int vize,final,butunleme;
float notort,genelort;

printf("Genel ortalamanizi giriniz: ");
scanf("%f",&genelort);

printf("\nVize sinavindan almis oldugunuz notu giriniz: ");
scanf("%d",&vize);

printf("Final sinavindan almis oldugunuz notu giriniz: ");
scanf("%d",&final);

notort=(vize+final)/2.0;

printf("Not ortalamaniz: %.1f\n",notort);
if(notort>=60) {
	printf("\nTebrikler! Dersi gectiniz.");	
}
else if(notort>=50) {
	printf("\nButunleme sinavina girmeniz gerekmektedir!");
	printf("\nButunleme sinavinda aldiginiz notu giriniz: ");
	scanf("%d",&butunleme);
	
	if(butunleme>=45 and genelort>=2.5) {
		printf("\nTebrikler! Dersi gectiniz.");	
	}
	
	if(genelort<2.5) {
		printf("\nGenel ortalamaniz dusuk oldugu icin dersten kaldiniz!");
	}
}
else {
	printf("\nDersten kaldiniz!");
}

	

	
	
	
return 0;
}
