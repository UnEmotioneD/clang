// Standard I/O for scanf and printf
#include <stdio.h>

/**
 * Pointer : passes the memory address of variable
 * Allowing the function to modify values directly
 */
void swapIntegerNoTmp(int *x, int *y) {
  *x = *x + *y;
  printf("first : %d, second : %d\n", *x, *y);

  *y = *x - *y;
  printf("first : %d, second : %d\n", *x, *y);

  *x = *x - *y;
  printf("first : %d, second : %d\n", *x, *y);
}

int main(void) {
  int firstInput, secondInput = 0;

  printf("Enter first integer: \n");
  scanf("%d", &firstInput);

  printf("Enter second integer: \n");
  scanf("%d", &secondInput);

  // Passes memory address of variables to function
  swapIntegerNoTmp(&firstInput, &secondInput);

  printf("Swapped First: %d\nSwapped Second: %d\n", firstInput, secondInput);

  return 0;
}
