/*
ATAMALAR:

# Degisken(variable) = ifade(expression)
# Bir degiskeni tanimlarken ilk yapilacak islem su sekildedir;
- degiskenin tanimlanacagi ifade degeri okunur ve daha sonra bu deger degiskene atanir/tanimlanir.
*/



/* 
ARTIRMA VE AZALTMA ISLEMLERI:

# i+=1 (Solda gösterilen ifade i degerinin 1 artirmasini saglar. C dilinde bu ifadeyi yapmanýn baska bir yolu daha vardir. Su sekildedirler);
 
- postfix: tanimlanan bir degeri bir sonraki ciktida bir azaltmaya veya artirmaya yarar. Asagidaki gibi kullanilir;
-- i++(sonraki ciktida bir artirir). veya i--(sonraki ciktida bir azaltir).
   
- prefix: tanimlanan bir degeri ciktida anlik olarak bir azaltmaya veya artirmaya yarar. Asagidaki gibi kullanilir;
-- i++(ciktida bir artirir). veya i--(ciktida bir azaltir).
*/

#include <stdio.h>

int main ()
{

// DEGISKEN ATAMA ISLEMLERI YAPIYORUM:
printf("DEGISKEN ATAMA ISLEMLERI\n");
int x=26;
int y=-7;
int z=3;
printf("x:%d  y:%d  z:%d",x,y,z);
// x ve y degiskenlerinin degerlerini z degiskenine esitledim.
x=z;
y=x;
printf("\nyeni degerler x:%d  y:%d  z:%d\n",x,y,z);
// esitlemenin bir diger yontemi asagidaki sekildedir; (profesyoneller bu yontemi kullanmayi cok tercih etmezler).
printf("\nDIGER YONTEM ILE ESITLEME\n");
int a=3;
int b=2;
int c=1;
printf("a:%d  b:%d  c:%d\n",a,b,c);
a=b=c;
printf("yeni degerler a:%d  b:%d  c:%d\n",a,b,c);


// ARTIRMA VE AZALTMA ISLEMLERI YAPIYORUM:
printf("\n\n\nARTIRMA ve AZALTMA ISLEMLERI\n");
int i=1;
printf("i:%d\n",i);
i+=5;
printf("artirilmis yeni deger i:%d\n",i);
i-=2;
printf("azaltilmis yeni deger i:%d\n",i);
// C'deki yontem ile tanimlanan degiskenin degerini bir azaltma ve artirma islemi yapiyorum.
printf("\nC'DEKI KOLAY YONTEM ILE SAYIYI BIR ARTIRMA VEYA AZALTMA ISLEMLERI");
int d=-1;
int e=85;
int f=29;
printf("\nd:%d  e:%d  f:%d\n",e,d,f);
printf("yeni deger1 = d:%d  e:%d  f:%d\n",--d,e--,f++);
printf("yeni deger2 = d:%d  e:%d  f:%d\n",d++,e++,++f);
printf("yeni deger3 = d:%d  e:%d  f:%d\n",++d,e--,f--);
printf("yeni deger4 = d:%d  e:%d  f:%d\n",--d,--e,--f);

return 0;	
}
