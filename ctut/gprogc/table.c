#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=10;i>=1;i--)  
    
    {
        printf("%d\t",n);
        printf("X\t");
        printf("%d",i);
        printf("\t = \t %d",i*n);
        printf("\n");


    }
}