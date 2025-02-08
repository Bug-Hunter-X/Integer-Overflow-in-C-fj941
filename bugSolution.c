#include <stdio.h>
#include <limits.h>
int main() {
  long long x = 5;
  long long *ptr = &x;
  *ptr = LLONG_MAX; //Checking the overflow by assigning the maximum possible value a long long can hold.
  if(*ptr == LLONG_MAX)
  {
    printf("The value of x is: %lld\n", x);
  }
  else
  {
    printf("Integer Overflow occurred\n");
  }
  return 0;
}
