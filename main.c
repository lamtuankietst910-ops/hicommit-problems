#include <stdio.h>

int main() {
  double w,h;
  scanf("%lf",&w);
  scanf("%lf",&h);
  float BMI;
  BMI = w/(h/100)*(h/100);
  if(BMI < 18.5)
    printf("\nUNDERWEIGHT");
  else if(18.5 <= BMI < 25)
    printf("\nNORMAL");
  else if(25 <= BMI < 30)
    printf("\nOVERWEIGHT");
  else (BMI >= 30);
    printf("\nOBESE");
  return 0;
}