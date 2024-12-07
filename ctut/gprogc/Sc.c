#include<stdio.h>
int main()
{
    char day;
    printf("Enter the day{M-S}:");
    scanf("%c",&day);
    switch(day)
    {
        case 'M': printf("MONDAY\n"); 
        break;
        case 'T': printf("TUESDAY\n");
        break;
        case 'W': printf("WEDNESDAY\n");
        break;
        case 't': printf("THURSDAY\n");
        break;
        case 'F': printf("FRIDAY\n");
        break;
        case 's': printf("SATURDAY\n");
        break;
        case 'S': printf("SUNDAY\n");
        break;
        default : printf("Invalid Entry");
        break;
    }
}