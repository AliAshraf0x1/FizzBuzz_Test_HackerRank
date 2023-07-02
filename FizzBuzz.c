/*
*By:- Ali Ashraf
*aliashrafali0155239@gmail.com
*/
#include<stdio.h>
int in;
int main ()
{
    scanf("%d",&in);
for(int i=1;i<=in;i++)
{
if (i%3==0 && i%5!=0){printf("Fizz\n");}
else if (i%5==0 && i%3!=0){printf("Buzz\n");}
else if (i%3==0 && i%5==0){printf("FizzBuzz\n");}
else{printf("%d\n",i);}
}
return 0;
}
