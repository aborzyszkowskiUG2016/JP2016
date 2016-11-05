/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int liczbapierwsza, liczbadruga ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &liczbapierwsza);
   printf("Podaj drugą liczbe: ");
   scanf("%d", &liczbadruga);
   printf ("większa liczba wynosi ");
   if (liczbapierwsza <= liczbadruga)
     printf ("%d\n", liczbadruga);
   else
     printf ("%d\n", liczbapierwsza);
   return 0;
}
