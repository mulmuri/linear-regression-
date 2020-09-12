#include <stdio.h>

int main(void) {
  int N = 10;
  float sigma_X = 0;
  float sigma_Y = 0;
  float sigma_XX = 0;
  float sigma_XY = 0;

  for (int i=0; i<N; i++) {
    int x, y;
    scanf("%d %d", &x,&y);
    sigma_X += x;
    sigma_Y += y;
    sigma_XX += x*x;
    sigma_XY += x*y;
  }

  float a = (N*sigma_XY - sigma_X*sigma_Y)/(N*sigma_XX - sigma_X*sigma_X);
  float b = (sigma_XX*sigma_Y - sigma_X*sigma_XY)/(N*sigma_XX - sigma_X*sigma_X);

  printf("%f\n", a);
  printf("%f\n", b);
}
