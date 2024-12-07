#include<stdio.h>
int main()
{
    int mrp[3];
    float gst[3],s;
    printf("Enter MRPs of products\n");
    for (int i = 0; i < 3; i++)
    { 
        printf("For product %d\n",i+1);
        scanf("%d",&mrp[i]);
    }
    printf("The final costs are \n");

    for (int i = 0; i < 3; i++)
    {
        gst[i] =((float)mrp[i]*18/100)+(float)mrp[i];
        printf("The Final price for product %d is %f \n",i+1,gst[i]);
    }
    for (int i = 0; i < 3; i++)
    {
         s = s +  gst[i];
    }
    
    printf("The Total bill value is %f",s);
}