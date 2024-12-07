#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
     printf("The Memory address of age : %d\n",ptr);
     ptr--;
     printf("The Dencremented value of ptr is %d",ptr);//moves one integer space ahead in the momory location.

}
//output
//The Memory address of age : 6422296
//The Dencremented value of ptr is 6422292  