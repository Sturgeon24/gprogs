//program includes multi datatype input and printing 
#include<stdio.h>
int main()
{
    //variables
    int integer=20;
    float floater=2.20;
    char cl ='l';
    int a;float b;char c;

    {
        printf("for int values % d \n",integer);
        printf("for float values %f \n",floater ); 
        printf("for char values %c\n",cl );
    }
    //input
    scanf("%d",&a);
    scanf("%f",&b);
    scanf("%c",&c);
    int sum= integer + a ;

    printf("sum is \n%d \n",sum);
    printf("sum directly%f",a+b);
return 0;
}