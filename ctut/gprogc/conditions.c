// Q.If number is greater than 9 and less than 100( or is 2 digit number)
#include<stdio.h>
#include<math.h>
int main()
{  
    int a;//var declarations
    scanf("%d",&a);//the '&a' represents variable '*a' represents address 
    printf("Result:%d\n", a>9&& a<100);
    return 0;
} 
