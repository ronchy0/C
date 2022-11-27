/*
OTOMATIK DONUSUM CIZELGESI:

NOT: Veri tipi donusumlerinde saga dogru gidildikce oncelik artar!

char									     long
short ---> int ---> float ---> double ---> double	
*/

#include <stdio.h>

int main()
{

double x=3.2;
int y=2;
printf("OTOMATIK YAPILAN DONUSUMLER\n");
printf("x / y degeri(float formatinda): %.1f\n",x/y);
printf("y / x degeri(int formatinda): %.1d\n",y/x);
printf("5.7 / 4 = %.1f\n",5.7/4);
printf("(2.1 * 3) + (-4.4 / 7) = %.1f\n",(2.1 * 3) + (-4.4 / 7));


printf("\n\n\nMANUEL YAPTIGIM DEGISIKLIKLER\n");
// asagidaki ifade de double olan bir degeri integer veri tipine cevirdim.
printf("%d\n",(int)42.12343678572);

// asagidaki ifade de integer olan bir degeri float veri tipine cevirdim.
printf("%.1f\n",(float)9);

return 0;	
}
