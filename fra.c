#include<stdio.h>

void input(int *n1,int *d1,int *n2,int *d2)
{
   printf("enter the first fraction\n");
   scanf("%d%d",n1,d1);
   printf("enter the second fraction\n");
   scanf("%d%d",n2,d2);
}

 int sum(int n1,int d1,int n2,int d2,int *n,int *lcm)
{
   *n=(n1*d2)+(n2*d1);
   *lcm=(d1*d2);
}

int output(int n,int lcm)
{
   printf("the sum is %d/%d",n,lcm);
}

int main()
{
   int n1,n2,d1,d2,n,lcm,s;
   input(&n1,&d1,&n2,&d2);
   s=sum(n1,d1,n2,d2,&n,&lcm);
   output(n,lcm);
}

