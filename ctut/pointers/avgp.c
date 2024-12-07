#include<stdio.h>
void rt(int a,int b,int *sum,int *pro,int *average);
int main()
{
    int a =5,b=6;
    int sum,pro=0,average=0;
    printf(" Before rt is called \n The sum is %d \t The product is %d \t The average is %d\n",sum,pro,average);
    rt(a,b,&sum,&pro,&average);
    printf("The sum is %d \t The product is %d \t The average is %d",sum,pro,average);
    return 0;
}
void rt(int a,int b,int *sum,int *pro,int *average)//Pass by value for a and b but for sum,product and average we access its memory address.  
{
    *sum=a+b;
    *pro=(a)*(b);
    *average=(a+b)/2;
}