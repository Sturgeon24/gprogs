//area programs
#include<stdio.h>
#include<math.h>
void asquare();
void arectangle();
void acircle();
int main()
{ 
char c;
printf("Enter the Shape:\n");
scanf("%c",&c);
switch(c)
{
    case 'C' : acircle();
    break;
    case 'S': asquare();
    break;
    case 'R':arectangle();
    break;
    case 'c' : acircle();
    break;
    case 's': asquare();
    break;
    case 'r':arectangle();
    break;
    default:printf("Invalid Entry");
}
}
void asquare()
{
printf(" Enter the side:\n");
float side;
scanf("%f", &side);
printf("the side is %f\n",side);
printf("Area=%f", side*side);  
}
void acircle()
{
printf("Enter the radius:\n");
float radius,pi=3.14;
scanf("%f", &radius);
printf("Radius is %f\n",radius);
printf("Area=%f", radius*radius* pi);
}
void arectangle()
{
printf("Enter the Length and Breath:\n");
float l,b;
scanf("%f%f",&l,&b);
printf("The Length and Breath are: %f and %f \n",l,b);
printf("The Area is :%f",l*b);
}



