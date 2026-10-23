#include <stdio.h>

int main() {
  float w,h;
  scanf("%2.f",&w);
  scanf("%2.f",&h);
  float BMI;
  BMI = w/(h/100)*(h/100);
  if(BMI < 18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if(18.5 <= BMI < 25)
  {
    printf("NORMAL");
  }
  else if(25 <= BMI < 30)
  {
    printf("OVERWEIGHT");
  }
  else (BMI >= 30)
  {
    printf("OBESE");
  }
  return 0;
}