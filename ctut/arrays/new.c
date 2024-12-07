//Syntax 
#include<stdio.h>
int main()
{
    int whole[10] ={0,1,2,3,4} ;
  for (int i = 0; i <5; i++)
  {
    printf("The value at %d is %d\n",i+1,whole[i]);
  }
    int in[5];
    for (int i = 0; i < 5; i++)
    { 
        printf("Enter the %d element \n",i+1);
        scanf("%d",&in[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The element of in present at location %d is %d \n",i+1,in[i]);
    }     
}