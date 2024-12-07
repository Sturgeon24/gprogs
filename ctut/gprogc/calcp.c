#include<stdio.h>
#include<math.h>
//Function declaration
void calcprice(float value);//----->parameter 
int main()
{
    int a;
    /*float value= 100.0;//------->argument, changes made in the functions does not effect this value
    calcprice(value);//------->this is parameter ,this takes a copy of arguement and prints acc. to function
    printf("%f\n",value);//----->this statement uses the value of argument rather than parameter */
    printf("Enter the number to be squared :");
    scanf("%d",&a);
    printf("The square is :  %f",pow(a,2));

}
//Function defenition
void calcprice(float value)//
{
    value +=(0.18*value);// the changes made here are localzied
    printf("The Price with GST is:%f\n",value);//

}