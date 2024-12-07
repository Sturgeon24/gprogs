//Recursion problem 1
#include<stdio.h>
void printhw(int count);
int main()
{
    int n;
    printf("Enter the count :");
    scanf("%d",&n);
    printhw(n);
return 0;
}
void printhw(int count)
{
    if(count == 0)
    {
        return;
    }
    printf("HELLO WORLD\n");
    printhw(count-1);

}