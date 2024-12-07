
#include<stdio.h>
int main()
{ 
    printf("Enter the numbers :");
    int n;
    do
    {
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2 != 0  )//CODE TERMINATES AT ODD NUMBER 
        {
            break;
        }
    } while (1);
    printf("Thank you ");
    
   
}