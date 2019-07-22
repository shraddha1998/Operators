/*

EXPRESSION1 : a+b*-c
EXPRESSION2 : -c/b*c-a
EXPRESSION3 : -a+ ++b %a

*/
    #include<stdio.h>
    int main()
    {
     int a=2,b=5,c=10;
      printf("Value of EXPRESSION1 = %d\n",(a+b*-c));
      printf("Value of EXPRESSION2 = %d",(-c/b*c-a));
      printf("Value of EXPRESSION3 = %d",(-a+ ++b %a));
     return 0;
    }
