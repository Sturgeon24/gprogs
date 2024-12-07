#include<stdio.h>
int facc(int n);
int main()
/*int n; int long  mult =1;
printf("Enter the number :");
scanf("%d",&n);
for(int i=n;i>=1;i--)
{
     mult = mult* i;

}
printf("The factorial is = \t %d",mult);
}*/
{
     int num;
printf("Enter the number who's factorial is needed");
scanf("%d",&num);
printf("the factorial is %d",facc(num));
return 0;

}
int facc(int n)
{
     if(n==0)
     {
     }
     int Facnm1=facc(n-1);
     int facc=Facnm1 *n;

}