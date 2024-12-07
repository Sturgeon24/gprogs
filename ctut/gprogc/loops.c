#include<stdio.h>
int main()
{

    {
     int sum=0;
        //printf("Enter the Number of terms ");
       // scanf("%d",&n);
       /* for(i=0;i<=n;i++)
        {
            printf("%d\n",i);
        }
       */
     /* while(i<=n)
     {
    printf("%d\n",i);
    i++;
     }*/
    /*do
    {
        printf("%d\n",i);
        i++; 
        
    }
     while (i<=n);
    
    }*/

   //sum of N natural numbers 
   for(int i=5;i<=50;i++)                                
   {
    sum += i;        //NOTE: THE ITERATOR I IS LIMITED TO THIS PARTICULAR BLOCK OF for()  ........

   }
   printf("Sum is :");
   printf("%d\n",sum);
    }



}
