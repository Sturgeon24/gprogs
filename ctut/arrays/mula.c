//Get The marks of 3 subjects for two students 
#include<stdio.h>
void printmarks(int ar[][],int n,int m);
int main()
{
    //intialise a 2 dimensional array
    //intialization also could have been
    //int ar[2][3]={}
    int ar[2][3];//ar-[2]this specifies rows --[3] specifies columns like in matrix ---> _ _ _ | _ _ _
    int ar[0][0]=50;
    int ar[0][1]=40;
    int ar[0][2]=30;
    int ar[1][0]=40;
    int ar[1][1]=50;
    int ar[1][2]=50;
     printmarks(ar,2,3);
}