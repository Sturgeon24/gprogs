#include<stdio.h>
void square(int n);
void psquare(int *n);
void  main()   
{
 int num=4;
 //Call by value 
 square(num);
 printf("The value is %d\n",num);//The value remains same in this stage as a copy was used 
//Call by refference 
 psquare(&num);//Give the address of num to pointer n
 printf("The value is %d\n",num);//Value printed here was changed at the location it self and is hence changed 
}
void square(int n)
{
   n=n*n;//Uses a copy of num to compute value 
   printf("The square is %d\n",n);//prints the temporary computed value 
   
}
void psquare(int *n)
{
   *n=(*n)*(*n);//Makes changes at the location changing the original value 
   printf("The square is %d\n",*n);//prints the changed value 

}