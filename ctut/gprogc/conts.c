//Prime number for given range
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,N,prime=0;
    printf("Enter the Range of number:");
    scanf("%d",&n);
    scanf("%d",&N);
    if(n==1||n==0)
    { exit(0);}
    if(n>N)
    {
        int temp = n;
        n=N;
        N=temp;
    }
    printf("The prime numbers between %d and %d are:",n,N);
    for(int i=n;i<=N;i++)

    {
       prime = 1;
       int in =sqrt(i);
        for(int j=2;j<=in;j++)
        {
             if(i%j==0)
             {
                 prime =0;
                break;
             }
        }
        if(prime)
        {
            printf("%d ",i);
        }
    }

}