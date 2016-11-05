#include <stdio.h>
#include <math.h>
int main()
{
  double l,pl;
  printf("Podaj liczbe: ");
  scanf("%lf", &l);
  if (l>=0){
    pl=sqrt(l);
    printf("Pierwiastek z l = %lf wynosi %.4lf\n\n", l, pl);
    return 0;
  }
  else {
    printf("BŁĄD\n\n");
    return 0;
  }
}
