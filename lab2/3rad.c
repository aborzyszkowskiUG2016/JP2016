/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */
#include <stdio.h>
 #include <math.h>
int main() {
   double deg, rad;
   printf("Podaj kat w stopniach : ");
   scanf("%lf", &deg);
   rad = 2*M_PI*deg/360;  /* grep PI /usr/include/math.h */
   printf("%3.2lf deg = %2.19lf rad\n", deg, rad );
   return 0;
}
