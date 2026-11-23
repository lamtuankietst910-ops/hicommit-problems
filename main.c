#include <stdio.h>

int main() {
  float gpa, min;
  int abs;
  scanf("%f",&gpa);
  scanf("%5f",&min);
  scanf("%5d",&abs);
  if(abs > 3)
  {
    printf("FAIL_ATTENDANCE");
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT");
  }
  else if(gpa >= 8.0 && min >= 7.0)
  {
    printf("EXCELLENT");
  }
  else if(gpa >= 6.5 && min >= 5.0)
  {
    printf("GOOD");
  }
  else if(gpa >= 5.0 && min >= 4.0)
  {
    printf("PASS");
  }
  else 
  {
  printf("FAIL");
  }
  
  return 0;
}