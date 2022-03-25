#include<stdio.h>
#include<string.h>
int main()
{
     char un[100];
     scanf("%s", un);
     if((strlen(un)%2)==0)
          printf("CHAT WITH HER!");
     else printf("IGNORE HIM!");
}
