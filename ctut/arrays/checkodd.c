//TO CHECK FOR ODD ELEMENTS IN AN ARRAY 
#include<stdio.h>
int input(int ar[],int n);
int odd(int ar[],int n);
int main()
{
    int n;  int ar[10];
    printf("Enter the size of Array : \n");
   scanf("%d",&n);
   input(ar,n);
   int z=n-odd(ar,n);
   printf("The number of od number is : %d",z);
}
int input(int ar[],int n)
{
   
   printf("Enter the Elements of the Array :\n");

   for (int i = 0; i <n; i++)
   {
    scanf("%d",&ar[i]);
   }
   return n;
}
int odd(int ar[],int n)
{
    int count=0;
   for (int i = 0; i < n;i++)
   {
     if(ar[i]%2==0)
     count++;
   }
  return count; 
}
