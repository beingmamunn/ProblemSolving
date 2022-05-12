#include<stdio.h>
int main()
{
     int t, disp, cloth;
     scanf("%d", &t);
     while(t--)
     {
          scanf("%d %d", &disp, &cloth);
          if((disp*100)>=(cloth*10))
               printf("Cloth\n");
          else if((disp*100)<(cloth*10))
               printf("Disposable\n");

     }
}
