#include<stdio.h>
int main()
{
    int a=22;
    int b=26;
    int *pa =&a;
    int *pb=&b;
    pb++; 
    pb++;
    printf("the pointer difference is %d",pa-pb);
}