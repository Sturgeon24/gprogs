#include<stdio.h>
int getdsum(int x,int sum,int z);
int main()
{
    int x,sum=0,z =0;
printf("Enter the number:\n");
scanf("%d",&x);
printf("The sum of the digits is : %d",getdsum(x,sum,z));
}
int getdsum( int x,int  sum,int  z)
{
    
    
    if(x<1)
    {
        return sum;
    }
    int getdigit=x%10;
     sum += getdigit ;
     int reduce=x/10;
     z=reduce;
    getdsum( reduce,sum,z);

}
