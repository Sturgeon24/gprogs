//Array during function call
#include<stdio.h>
void pa(int a[],int n);
int  main()
{
    int a[]={1,2,3,4,5};
    pa(a,5);
}
void pa(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}