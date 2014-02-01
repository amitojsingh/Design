#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    /* request auto detection */
   int gdriver = DETECT, gmode;
   int i=50,j=50;

   /* initialize graphics and local
   variables */
   initgraph(&gdriver, &gmode, NULL);
   setbkcolor(5);
   while(i<900)
   {
   circle(100,100,i);
   i=i+1;
   }
   while(j<900)
   {
   circle(500,420,j);
   j=j+1;
   }
   /* clean up */
   closegraph();
   return 0;
}

