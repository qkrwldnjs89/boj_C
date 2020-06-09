#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int t, h, w, n;
   int i;
   scanf("%d", &t);

   for (i = 0; i < t; i++)
   {
      int floor, row;
      scanf("%d %d %d", &h, &w, &n);
      
      floor = (n % h == 0) ? h : n % h;
      row = (n % h == 0) ? n / h : n / h + 1;

      if (row < 10)
      {
         printf("%d0%d\n", floor, row);
      }
      else
      {
         printf("%d%d\n", floor, row);
      }
   
   }
   return 0;
}
