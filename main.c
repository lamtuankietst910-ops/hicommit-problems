#include <stdio.h>

int main() {
  float w,h;
  scanf("%f",&w);
  scanf("%f",&h);
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