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
    if ((15<=per) && (per<24))
    {
    newrate=1+int_rate;
    /* compute the interest */
    interest = amount*(newrate/100.0)*(per/12.0);
    /* output the result */
    printf("The interest due is $%.2f\n\n", interest);
    }
    else if ((per>24) || (per==24))
    {
    newrate=1.25+int_rate;
    /* compute the interest */
    interest = amount*(newrate/100.0)*(per/12.0);
    /* output the result */
    printf("The interest due is $%.2f\n\n", interest);
    }
    else
    {
    printf("Our Bank doesn't give out such loans");
    }
  return 0;
}
