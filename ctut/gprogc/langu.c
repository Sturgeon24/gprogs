#include<stdio.h>
void Namaste();
void Bonjour();
void Konichiwa();
void Hola();
int main()// execution starts from here


{
    char c;
    printf("Please Enter your nationality");
    scanf("%c",&c);
    switch(c)
    {
        case 'I': Namaste(); break;
        case 'F': Bonjour();break;
        case 'J': Konichiwa();break;
        case 'S': Hola();break;
        default : printf("Sorry for the inconvenience But we don't have your greeting at the moment "); break;
        

    }
 
}
void Namaste()
{
printf("Namaste\n") ;

}
void Bonjour()
{
printf("Bonjour\n") ;

}
void Konichiwa()
{
printf("Konichiwa\n") ;

}
void Hola()
{
printf("Hola\n"); 

}