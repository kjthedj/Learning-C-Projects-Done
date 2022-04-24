#include <stdio.h>>
#include <math.h>
// we are modifying this program such that
 int main(void)
 {
     double a , b , c , root1 , root2;
     // Let general form of equation be ax^2 + bx +c = 0
     printf("Enter Value for a: \n",a);
     scanf("%lf",%a);
     printf("Enter Value for b: \n",b);
     scanf("%lf",&b);
     printf("Enter Value for c: \n",c);
     scanf("%lf",&c);
     if (a == 0) //if a is zero, only 1 root
        {
    printf("You input a = 0.\n");
    printf("Only one root: %lff", -c/b);
        }
    else //else if a is non-zero, there will be 2 root values
        {
    root1 = (-b + sqrt(…))/(2*a);
        }
    return 0;
 }
