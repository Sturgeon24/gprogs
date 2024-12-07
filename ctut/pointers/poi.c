//Aim:To print pointer of pointer 
#include<stdio.h>
int main()
{
    int i=10;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("The Value of i using pointer to pointer relation is:%d \n",**pptr);
    printf("The value of i %d \n ",i);
    printf("The  location of i using & %d and using pointer %d\n",&i,ptr);
    printf("The location of ptr using & %d\n",&ptr);
    printf("The Location of ptr using pptr %d",pptr);
    
}