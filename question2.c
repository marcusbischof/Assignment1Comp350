// Marcus Bischof
// question 2
// 260503230

/*
  The student's program is wrong because it does not undestand
  that the big o of the bottom function (factorial) is larger than
  the power function, therefore if the program kept going past n=70
  towards larger numbers the top would grow slower than the bottom
  and this would end up having a limit of 0, one should use double
  precision to get the right answer
*/

#include <stdio.h>
#include <math.h>

long Factorial(int n) {
  int c;
  long result = 1;
  for (c = 1; c <= n; c++) {
    result = result * c;
  }
  return result;
}

double FactorialDouble(int n) {
  int c;
  long double result = 1.0f;
  for (c = 1; c <= n; c++) {
    result = result * (double)c;
  }
  return result;
}

int main() {
    int n = 1;
    float previous;
    // this while loop calculates the students initial false conclusion
    printf("\n CALCULATES STUDENTS INITAL FALSE CONCLUSION ---------------- \n");
    while ( n < 70 ) {
       if (n == 1) {
         previous = 100.0f;
       } else {
         float finalResult = ((100.0f * previous) / (float)n);
         previous = finalResult;
       }
      n += 1;
    }
    printf("\n");
    printf("The first calculation --> %f", previous);
    printf("\n");
    int k = 1;
    double SecondPrevious;
    // we make n larger and use double precision to realize that the limit for the
    // equation will actually equal 0
    printf("\n CALCULATES USING CORRECT METHOD ---------------- \n");
    while ( k < 300 ) {
       if (n == 1) {
         previous = 100.0f;
       } else {
         double finalResult = ((100.0f * SecondPrevious) / (double)k);
         SecondPrevious = finalResult;
       }
      k += 1;
    }
    printf("\n");
    printf("The second calculation --> %f", SecondPrevious);
    printf("\n");
    return 0;
}
