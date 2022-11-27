#include <stdio.h>

int main() {

/*  
  1-) integer(int) veri tipi:
	# Tam sayıları içeren veri tipidir.
	# 4 byte(32 bit) alanı kapsar.
	
	    
  2-) float(float) veri tipi:
	# Ondalıklı sayıları içeren veri tipidir.
	# 4 byte(32bit) alanı kapsar.
	
	  
  3-) double(double) veri tipi:
	# Uzun ondalıklı sayıları içeren veri tipidir.
	# 8 byte(64 bit) alanı kapsar.
	
			
  4-) character(char) veri tipi:
	# Harfleri içeren veri tipidir.
	# 1 byte(8 bit) alanı kapsar.
	
  Not: Bu veri tiplerinin yanlarına 'Short ve Long' ekleyip tanımlarsak; veri tipinin değer aralığını ve kapladığı alanı da değiştirmiş oluruz.  
*/

int sayi1=3;
float sayi2=2.7;
double sayi3=7.6344;
char harf1='T';

printf("%d %f %f %c %s\n",sayi1,sayi2,sayi3,harf1,"C ogreniyorum!");
printf("%d %30f %f %c %s\n",sayi1,sayi2,sayi3,harf1,"C ogreniyorum!");
printf("%d %.1f %.4f %c %s\n",sayi1,sayi2,sayi3,harf1,"C ogreniyorum!");

/*   
  Veri tiplerinin kaç byte alanı kapladığını bulalım;
   # sizeof fonksiyonu alan büyüklüğünü gösterir.
*/

printf("\n%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(long int));
printf("%d byte\n",sizeof(short int));
printf("%d byte\n",sizeof(float));
printf("%d byte\n",sizeof(double));
printf("%d byte\n",sizeof(char));
	
return 0;
}
