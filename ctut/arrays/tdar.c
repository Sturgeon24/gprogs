#include<stdio.h>
 int main()
{ 
    int ar[2][10];
 {
    
    for (int i = 1; i <=10; i++)
    {
       ar[0][i] =2*i;
       ar[1][i] =3*i;
    }
    printf("Table for 2 \t Table for 3 \n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d \t %d\n",ar[0][i],ar[1][i]);
    }
    
 }
}