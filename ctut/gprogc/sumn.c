//Recursion tree based
#include<stdio.h>
int sumn(int n);
int main()
{ 
      int n;

    printf("Enter the Nth term");
    scanf("%d",&n);
    printf("the sum is %d ",sumn(n));

  
}
//recursive function
int sumn(int n)
{
     if(n==1)
    {
     return 1;
    }
    int sumnm1=sumn(n-1);
    int sumn= sumnm1 + n ;
   
}