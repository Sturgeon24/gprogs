  #include<stdio.h>
  int main()
  {
    int a = 20 ;
  int n=0;
 while(a>0)
 {
   a = a/10;
   ++n;
 }
 printf("%d",n);
  }