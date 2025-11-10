#include<stdio.h>
int row, col, n;

int main()
{

   printf("enter a number :");
   scanf("%d",&n);
   for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){

        printf("%d", col );
    }

        printf("\n");

   }








}

