#include <stdio.h>
#include <math.h>

#ifdef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif /* ifdef _USE_MATH_DEFINES */

int main(int argc, char *argv[])
{
  float radius, area;
  printf("Circle Area simple calculator:\nPlease intro the radius:\n");
  scanf("%f",&radius);
  area = M_PI * pow(radius, 2);
  printf("Circle area is : %0.2f\n", area);
  return 0;
}
