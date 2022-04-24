/************************************/
/* Program:  Simple.c               */
/* Hands-on 1                       */
/************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b, c, root1, root2;
  printf("Input the coefficient a => ");
 scanf("%lf", &a);
 printf("Input the coefficient b => ");
 scanf("%lf", &b);
 printf("Input the coefficient c => ");
 scanf("%lf", &c);

 /*Lets compute a few roots*/
 root1=(-b+sqrt(b*b-4*a*c)/2*a);
 root2=(-b-sqrt(b*b-4*a*c)/2*a);
 printf("The first root is %8.3f\n",root1);
 printf("The second root is %8.3f\n",root2);
  return 0;
}
