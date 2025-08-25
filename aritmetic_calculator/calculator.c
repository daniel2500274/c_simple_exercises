#include <stdio.h>
int main(){
  // User data
  float number_one, number_two;
  // Output data
  float sum, subtract, multiply, division;

  printf("Please enter two numbers\n");
  scanf("%f %f", &number_one, &number_two);
  sum = number_one + number_two;
  subtract = number_one - number_two;
  multiply = number_one * number_two;
  division = number_one / number_two;

  printf("----TOTALS ----:\nSum..... : %2.2f\nSubtract : %2.2f\nMultiply : %2.2f\nDivision : %2.2f \n",sum,subtract,multiply,division);
  return 0;
}
