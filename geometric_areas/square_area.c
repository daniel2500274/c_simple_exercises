#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
  float side,area;
  printf("Square Area simple calculator\nPlease insert the side long: \n");
  scanf("%f", &side);
  area = pow(side,2);
  printf("The area is : %.2f\n", area);
  return 0;
}
