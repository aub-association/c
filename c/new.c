#include<stdio.h>

int main(){
    printf("a number: ");
   int a;
   scanf("%d", &a);

   int b;
   b = (a*10)/100;

   printf("%d\n", b);

   int c = (a*15)/100;

   printf("%d\n", c);

    return 0;
}

