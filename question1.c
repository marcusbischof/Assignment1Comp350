// Marcus Bischof
// 260503230
// question1
#include <stdio.h>
#include <math.h>
#define FE_TONEAREST

int main()
{
    printf("Start of first c program for comp 350");

    float one = 1.0f;
    float x = 1.0f;
    float zero = 0.0f;
    int y = 1;

    /*
      I have discovered that FE_TONEAREST is the round operation
      that makes the most sense.
      We break out of the loop as soon as we find a number where
      the mentioned operation is not equal to one
    */
    printf("\n THE FIRST PART OF QUESTION IS PRINTED BELOW ------------------ \n");
    while (y != 2) {
      if ( (float)(FE_TONEAREST((FE_TONEAREST(one/x) * x))) != 1.0f ) {
        printf("\nThe first -- %f\n", x);
        y = 2;
      }
      x += 1.0f;
    }

    double oned = 1.0f;
    double xd = 1.0f;
    double zerod = 0.0f;
    int yd = 1;

    /*
      I have discovered that FE_TONEAREST is the round operation
      that makes the most sense.
      We break out of the loop as soon as we find a number where
      the mentioned operation is not equal to one
    */
    printf("\n THE SECOND PART OF QUESTION IS PRINTED BELOW ------------------ \n");
    while (yd != 2) {
      if ( (double)(FE_TONEAREST((FE_TONEAREST(oned/xd) * xd))) != 1.0f ) {
        printf("\nThe second -- %f\n", xd);
        yd = 2;
      }
      xd += 1.0f;
    }

    return 0;
}
