 #include<stdio.h>
 int main()
 {
      int t, x, y, d;
      scanf("%d", &t);
      while(t--)
      {
           scanf("%d %d %d", &x, &y, &d);
           int temp;
           if(x<y)
           {
                temp=x;
                x=y;
                y=temp;
           }
           if((x-y)<=d)
               printf("YES\n");
           else
               printf("NO\n");

      }
 }
