#include<stdio.h>
/*{
    
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    void sum();
   printf("The sum is: ");
}
void sum(int a,int b)
{ 
    
a+b;
} */     
#include<stdio.h>

int main()
/*{
    {

    char name[20];
    printf("Enter Your name:\n");
    fgets(name,20, stdin);
    printf("Your Name is:%s \t",name);

return 0;


    }
}*/
/*{
    int n=0,m=0;
    for(int i=0;i<5;i++)
    n++;
    for(int i=0;i<5;++i)
    ++m;

    printf("%d\n",n);
    printf("%d",m);
}*/
{
    int d;
    int a= 20;
    int *p=&a;
    int _a=*p;
    printf(" The value %d\n The address %d\n The value again %d\n The value printed using pointer %d",a,&a,*p,_a);
}




