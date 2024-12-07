//SKIP n 
#include<stdio.h>
int main()
{ 
   int n;
    printf("Enter the number to skip:\t");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
       if(i==n)
       {
        continue;
       }
       printf("%d\n",i);

    }

   for(int i=5;i<=100;i++)
    {
       if(i%2==0)
       {
        continue;
       }
       printf("%d\n",i);

    }
}