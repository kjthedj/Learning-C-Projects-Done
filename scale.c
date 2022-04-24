#include <stdio.h>
#include <math.h>

double scale(int, int);

int main(void)
 {
    int a , b;

    printf("Enter a value for a =  ");
    scanf("%d",&a);
    printf("\nEnter a value for b = ");
    scanf("%d",&b);
    printf("\nfor a = %d and b = %d c = %lf",a,b);
    return 0;
}
double scale(int x,int y)
{
    return x*pow(10,y);
}
