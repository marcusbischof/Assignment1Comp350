// Marcus Bischof
// 260503230
// question 3

#include <stdio.h>
#include <math.h>

int main() {

  // question 3a
  int a = 1;
  int b = 60;
  // c will be set to equal the result xn (before we subtract ln(2) from it)
  double c = 1.0f;
  // d is the outside 2^(n+1 expression)
  double d = 1.0f;
  printf("\n Starting question 1 print statements -------------------- \n");
  while (a <= b) {
    c = d*2*(sqrt(1+1/d*c)-1);
    // ln2 = log(2) in c
    double finalResult1 = c - log(2);
    printf("\nx%i final result is --> %.16f\n",a,finalResult1);
    d *= 2;
    a++;
  }

  // question 3b
  /*
    We transform the expression such that the outside (2^(n+1)) is
    eliminated. The expression can be simplified as such -->
      result = ((2xn) / (sqrt(1 + 2^(-n)xn) + 1))
  */
  int j = 1;
  int p = 60;
  // y will contain the result each iteration before we subtract ln(2)
  double y = 1.0f;
  double z = 1.0f;

  printf("\n Starting question 2 print statements -------------------- \n");
  while (j <= p) {
    y = 2 * y / (sqrt(1+z*y)+1);
    // ln2 = log(2) in c
    double finalResult = y - log(2);
    printf("\nx%i final result is --> %.16f\n",j,finalResult);
    z /= 2;
    j++;
  }

  return 0;
}
