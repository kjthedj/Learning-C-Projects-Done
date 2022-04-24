/* program style.c for FE1008 hands-on          */
/* Name:                                      */
/* Group:                                     */
/* Date:                                      */

#include <stdio.h>


int main(void)
{
    /* declaration */   double radius, area, circumference;/* get the input */
    #define  P_CONST 3.14159
    printf("Enter the radius of the circle: \n ");
    scanf("%lf", &radius);
    /* compute area and circumference */
    area = 2.0 * radius * P_CONST;
    circumference= P_CONST * radius * radius;
    /* display the results */
    printf("radius of circle        = %.2lf\n", radius);
    printf("area of circle          = %.2lf\n", area);
    printf("circumference of circle = %.2lf\n", circumference);
  return 0;
  }
