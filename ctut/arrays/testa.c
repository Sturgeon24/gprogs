#include<stdio.h>
int main()
{
   /* int ar[2][3]={{50,40,30},{50,50,30}};
    printf("%d",ar[1][2]);*/
    int ar[]={1,2,3,4,5};
    printf("The number at %d ",*(ar+3));
}