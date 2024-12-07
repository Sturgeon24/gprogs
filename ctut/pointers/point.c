#include<stdio.h>
int main()
{ 
    int d;
    int a= 20;//value assingment address being filled
    int *p=&a;//pointer 'p' being assigned the value of a's address '&'--------->address acess operator[Address of..]
    int _a=*p;// the memory address being accessed using '*'--------->value access operator[Value of...]
    printf(" The value %d\n The address %d\n The value again %d\n The value printed using pointer %d",a,&a,*p,_a);
    printf("The Address pointer of P %d",&p);
}  