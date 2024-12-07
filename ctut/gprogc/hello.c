
#include<stdio.h>
#include<math.h>
int main()
{
  char c;
  printf("Enter Character:");
  scanf("%c",&c);
  if(c>='a'&& c<='z')
  {
    printf("The Character is lower case.\n");

  }
  else if(c>='A'&& c<='Z')
  {
    printf("The Character is Upper case \n");
  }
  else
  {
    printf("The Character entered is not a Letter");
  }
}

