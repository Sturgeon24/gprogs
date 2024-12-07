#include<stdio.h>
void printpnum(int *i);
void printnum(int i);
int main()
{
    int i=4;
    printf("The Address of i in main function %d \n",&i);
    printnum(&i);
}
//call by reference 
void printpnum(int *i)
{
    printf("The Address of i inside  function(with call by reference) %d\n",i);
}
//call by value 
void printnum(int i)
{
    printf("The Address of i inside function (with call by value) %d\n",&i);
}