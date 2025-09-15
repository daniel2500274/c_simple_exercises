#include <stdio.h>
int main(int argc, char *argv[])
{
  float base, height, area;
  printf("Triangle Area simple calculator\nPlease insert base and height\n");
  scanf("%f %f", &base, &height);
  area = (base * height)/2;
  printf("The area of your Triangle is : %.2f\n" , area);
}
