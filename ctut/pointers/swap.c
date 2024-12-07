#include<stdio.h>
void sp(int x,int y );
void psp(int *x,int *y);
int main()
{
    int x,y;
    printf("Enter Two numbers A and B \n");
    scanf("%d%d",&x,&y);
    printf("\n");
    sp(x,y);
    printf("The values of x(%d) and y(%d) remains same \n ",x,y);//The values will remain same 
    psp(&x, &y);
     printf("The values of A and B after External swapping : A(%d) & B(%d) \n",x,y) ;
}
//call by values  --->ref line 8 --->The copies are changed not the base value 
void sp(int a,int b)
{
    int t=a ;
    a=b;
    b=t;
    printf("The a is %d and b is %d\n ",a,b);
}
//call by reference --->Values being changed at the address level
void psp(int *x,int *y)
{
  int  t=*x;
  *x=*y;
  *y=t;
    printf("The values of A and B after internal swapping : A(%d) & B(%d) \n",*x,*y);  
}
