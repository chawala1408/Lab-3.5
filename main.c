#include <stdio.h>
int main(void)
{
  float b,h,ans;
  printf("Enter B : ");
  scanf("%f", &b);
  printf("Enter H : ");
  scanf("%f", &h);
  ans = 0.5 * b * h;
  printf("Answer is %0.2f", ans);
  return 0;
}
