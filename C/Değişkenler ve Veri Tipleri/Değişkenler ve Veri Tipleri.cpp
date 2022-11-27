#include <stdio.h>

int main() {

/*  
  1-) integer(int) veri tipi:
	# Tam say�lar� i�eren veri tipidir.
	# 4 byte(32 bit) alan� kapsar.
	
	    
  2-) float(float) veri tipi:
	# Ondal�kl� say�lar� i�eren veri tipidir.
	# 4 byte(32bit) alan� kapsar.
	
	  
  3-) double(double) veri tipi:
	# Uzun ondal�kl� say�lar� i�eren veri tipidir.
	# 8 byte(64 bit) alan� kapsar.
	
			
  4-) character(char) veri tipi:
	# Harfleri i�eren veri tipidir.
	# 1 byte(8 bit) alan� kapsar.
	
  Not: Bu veri tiplerinin yanlar�na 'Short ve Long' ekleyip tan�mlarsak; veri tipinin de�er aral���n� ve kaplad��� alan� da de�i�tirmi� oluruz.  
*/

int sayi1=3;
float sayi2=2.7;
double sayi3=7.6344;
char harf1='T';

printf("%d %f %f %c %s\n",sayi1,sayi2,sayi3,harf1,"C ogreniyorum!");
printf("%d %30f %f %c %s\n",sayi1,sayi2,sayi3,harf1,"C ogreniyorum!");
printf("%d %.1f %.4f %c %s\n",sayi1,sayi2,sayi3,harf1,"C ogreniyorum!");

/*   
  Veri tiplerinin ka� byte alan� kaplad���n� bulal�m;
   # sizeof fonksiyonu alan b�y�kl���n� g�sterir.
*/

printf("\n%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(long int));
printf("%d byte\n",sizeof(short int));
printf("%d byte\n",sizeof(float));
printf("%d byte\n",sizeof(double));
printf("%d byte\n",sizeof(char));
	
return 0;
}
