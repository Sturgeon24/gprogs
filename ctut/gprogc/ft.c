#include<stdio.h>
void  table(int a);//--------> parameter 
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    table(a); //calling statement is actual parameter,arguement.
    return 0;
}
void table(int a)//formal parameter ------->int a = a.
{
     for(int i=1;i<=10;i++)  
    
    {
        printf("%d\t",a);
        printf("X\t");
        printf("%d",i);
        printf("\t = \t %d",i*a);
        printf("\n");


    }
}