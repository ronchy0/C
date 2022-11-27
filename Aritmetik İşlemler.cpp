/*
# x + y ---> x ile y'i toplar.
# x - y ---> x'den y'i çýkarýr.
# x * y ---> x ile y'i çarpar.
# x / y ---> x ile y'i böler.
  
# x % y ---> x ile y'nin bölümden kalaný gösterir.
*/

#include <stdio.h>

int main()
{

printf("%d\n",8+6);
printf("%d\n",8-6);
printf("%d\n",8*6);
printf("%.1lf\n",8/6);
printf("%d\n",8%6);

int a=12;
int b=-7;

printf("\n%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%d\n",a/b);
printf("%d\n",a%b);

return 0;
}
