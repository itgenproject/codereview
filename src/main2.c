#include <stdio.h>
#include <math.h>

void main() {
  double R, m, P = 21500;
  scanf("%lf", &R);
  m = P * (4.0/3.0) * M_PI * R * R * R;
  
  if ((m - (int)m) >= 0.5)
  {
    m = (int)m + 1;
  }
  
  printf("\n %.0lf", m);
  return;
}
