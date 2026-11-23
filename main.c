#include <stdio.h>

int main() {
  double d;
  int t;
  scanf("%lf",&d);
  if (d <=1)
  {
    t = d * 15000;
    printf("\n",t);
  }
  else if (1<d<=5)
  {
    t = 1 * 15000 + (d - 1) * 13000;
  printf("\n",t);
  }
  else
  {
  t = 1 * 15000 + 4 * 13000 + (d -5) * 1100;
  printf("\n",t);
  }
  return 0;
}