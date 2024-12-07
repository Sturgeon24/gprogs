#include<stdio.h>
void ph();
void pg();
int main()
{
    for(int i=1;i<=5;i++)
    {  
        ph(); 
        pg(); 
    }
}
void ph()
{
    printf("Hello World!\n");
    printf("My name is Malhar\n");
}
void pg()
{
    printf("Good bye\n");
}