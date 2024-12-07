#include<stdio.h>
 int main()
{
  int i,j,coef,z,n;
  printf("Enter the number of Rows\n");
  scanf("%d",&z);
  n=z+1;
for(int i=0;i<n;i++)
 {
    for(j=1;j<=n-i;j++)
    printf(" ");
    coef=1;
    for(j=1;j<=i;j++)
    {
        printf("%2d",coef);
        coef=coef*(i-j)/j;
    }
    printf("\n");
 }

}