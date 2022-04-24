/* BankInterest.c to compute and display interest on bank account */

#include <stdio.h>

int main(void)
{
  int per;
  double amount, int_rate, interest,newrate;

  /* get the input: amount, int_rate, period */
  printf("Enter the principal amount deposited (in $): ");
  scanf("%lf", &amount);
  printf("Enter the basic annual interest rate (in %%): ");
  scanf("%lf", &int_rate);
  printf("Enter the deposit period (in months): ");
  scanf("%d", &per);
  switch (per)
  {
    case 15<=per<24 :

    newrate=1+int_rate;
    /* compute the interest */
    interest = amount*(newrate/100.0)*(per/12.0);
    /* output the result */
    printf("The interest due is $%.2f\n\n", interest);
    break;

    case per == 24 :

    newrate=1.25+int_rate;
    /* compute the interest */
    interest = amount*(newrate/100.0)*(per/12.0);
    /* output the result */
    printf("The interest due is $%.2f\n\n", interest);
    break;

    case per<24 :

    newrate=1.25+int_rate;
    /* compute the interest */
    interest = amount*(newrate/100.0)*(per/12.0);
    /* output the result */
    printf("The interest due is $%.2f\n\n", interest);
    break;

    default:
    printf("These loans are not given out by the bank lol");

    return 0;

    }
